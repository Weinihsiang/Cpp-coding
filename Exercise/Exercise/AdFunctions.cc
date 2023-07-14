#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"

namespace Ad{
    using namespace Ad::Constants;
    using namespace Ad::Types;
    using namespace Ad::Utils;
    using namespace Ad::Data;
    using namespace Ad::Visualize;

    void init_vehicle(VehicleType &vehicle,
                  const std::int32_t id,
                  const float speed_kph,
                  const float distance_m,
                  const LaneAssociationType lane){
                        vehicle.id = id;
                        vehicle.speed_mps = kph_to_mps(speed_kph);
                        vehicle.distance_m = distance_m;
                        vehicle.lane = lane;
                    }

    namespace Utils{

        float kph_to_mps(const float kph){
            float mps = kph * 1000/3600;
            return mps;
        }

    } // namespace Utils

    namespace Data{

        VehicleType init_ego_vehicle(){
            VehicleType new_vehicle{
                .id = EGO_VEHICLE_ID,
                .lane = LaneAssociationType::CENTER,
                .speed_mps = kph_to_mps(135.0),
                .distance_m = 0.0F,
            };

            return new_vehicle;
        };

        NeighborVehiclesType init_vehicles(){
            auto vehicles = NeighborVehiclesType{};

            /*VehicleType &vehicle,
                  const std::int32_t id,
                  const float speed_kph,
                  const float distance_m,
                  const LaneAssociationType lane*/

            init_vehicle(vehicles.vehicles_left_lane[0],
                        0,
                        130.0F,
                        80.0F,
                        LaneAssociationType::LEFT);
            init_vehicle(vehicles.vehicles_left_lane[1],
                        1,
                        80.0F,
                        -20.0F,
                        LaneAssociationType::LEFT);
            init_vehicle(vehicles.vehicles_center_lane[0],
                        2,
                        80.0F,
                        50.0F,
                        LaneAssociationType::CENTER);
            init_vehicle(vehicles.vehicles_center_lane[1],
                        3,
                        120.0F,
                        -50.0F,
                        LaneAssociationType::CENTER);
            init_vehicle(vehicles.vehicles_right_lane[0],
                        4,
                        110.0F,
                        30.0F,
                        LaneAssociationType::RIGHT);
            init_vehicle(vehicles.vehicles_right_lane[1],
                        5,
                        90.0F,
                        -30.0F,
                        LaneAssociationType::RIGHT);
            /* struct NeighborVehiclesType{
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_left_lane;
            //or std::array<VehicleType, Ad::Constants::NUM_VEHICLES_ON_LANE> vehicles_left_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_center_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_right_lane;
            };*/

            return vehicles;
        }


    }// namespace Data

    namespace Visualize{

        void print_vehicle(const Ad::Types::VehicleType vehicle){
            std::cout << "ID: "<< vehicle.id <<'\n';
            std::cout <<"Speed: " <<vehicle.speed_mps  <<'\n';
            std::cout <<"Distance: "<<vehicle.distance_m <<'\n';
            std::cout <<"Lane: " <<static_cast<std::int32_t>(vehicle.lane) <<'\n';
        };


        void print_neighbor_vehicles(const Ad::Types::NeighborVehiclesType &vehicles){
            std::cout <<'\n'<< "Left Vehicle: \n"<<"\n";
            for(int i=0; i<NUM_VEHICLES_ON_LANE;i++){
                //bcz of array we don't need -> or *
                print_vehicle(vehicles.vehicles_left_lane[i]);
                std::cout <<'\n';
            }
            std::cout <<'\n'<< "Center Vehicle: \n"<<"\n";
            for(int i=0; i<NUM_VEHICLES_ON_LANE;i++){
                print_vehicle(vehicles.vehicles_center_lane[i]);
                std::cout <<'\n';
            }
            std::cout <<'\n'<< "Right Vehicle: \n"<<"\n";
            for(int i=0; i<NUM_VEHICLES_ON_LANE;i++){
                print_vehicle(vehicles.vehicles_right_lane[i]);
                std::cout <<'\n';
            }

            /*
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_left_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_center_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_right_lane;
            */
        };

        void print_scene(const VehicleType &ego_vehicle,
                        const NeighborVehiclesType &vehicles){
                            /*print_scene
                                Output the vehicles at their posItion (regarding the relative distance and lane)
                                Every row of the console output has a size of 20 meters*/
                            char arr[11][3];

                            for(int i = 0;i<11;i++){
                                for(int j = 0;j<3;j++){
                                    arr[i][j]= ' ';
                                }
                            }
                            float positiondada = ((ego_vehicle.distance_m)*(-1)+100)/20;
                            int position = static_cast<std::int32_t>(positiondada);
                            int positionSecond = static_cast<std::int32_t>(ego_vehicle.lane);
                                        arr[position][positionSecond] = 'E';

                            for(int i = 0;i<2;i++){
                                        float positionLdada = ((vehicles.vehicles_left_lane[i].distance_m)*(-1)+100)/20;
                                        int positionL = static_cast<std::int32_t>(positionLdada);
                                        arr[positionL][0] = 'v';
                                        float positionCdada = ((vehicles.vehicles_center_lane[i].distance_m)*(-1)+100)/20;
                                        int positionC = static_cast<std::int32_t>(positionCdada);
                                        arr[positionC][1] = 'v';
                                        float positionRdada = ((vehicles.vehicles_right_lane[i].distance_m)*(-1)+100)/20;
                                        int positionR = static_cast<std::int32_t>(positionRdada);
                                        arr[positionR][2] = 'v';
                                    }

                            int num = 100;
                            std::cout<<"\t  L   C   R\n";

                            for(int i = 0; i<11;i++){
                                std::cout << num <<"\t";
                                for(int j = 0; j<3; j++){
                                    std::cout<< "| "<<arr[i][j]<<" ";
                                }
                                num -=20;
                                std::cout <<"|" <<"\n";
                            }
                            std::cout <<'\n';

                        };

    } // namespace Visualize

} // namespace Ad
