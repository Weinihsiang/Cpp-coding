#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"
#include "AdTypes.h"

// namespace Ad::Utils

namespace Ad{

    namespace Utils{
        float kph_to_mps(const float kph){
            float mps = kph * 1000/3600;
            return mps;
        }
    }

// namespace Ad::Data

    namespace Data{
        Ad::Types::VehicleType init_ego_vehicle(){
            Ad::Types::VehicleType new_vehicle{
                .id = Ad::Constants::EGO_VEHICLE_ID,
                .lane = Ad::Types::LaneAssociationType::Center_Lane,
                .speed_mps = Ad::Utils::kph_to_mps(135.0),
                .distance_m = 0.0,
            };

            return new_vehicle;
        }
    }

/*
float speed_mps;
    float distance_m;
Init the ego vehicle with the following attributes
ID=-1
Speed=135kph
Lane=Center
*/

// namespace Ad::Visualize

    namespace Visualize{
        void print_vehicle(const Ad::Types::VehicleType vehicle){
            std::cout << "ID: "<< vehicle.id <<'\n';
            std::cout <<"Speed: " <<vehicle.speed_mps  <<'\n';
            std::cout <<"Distance: "<<vehicle.distance_m <<'\n';
            std::cout <<"Lane: " <<static_cast<std::int32_t>(vehicle.lane) <<'\n';
        }
    }
}

//Print the ID, Speed, and Distance of a vehicle
