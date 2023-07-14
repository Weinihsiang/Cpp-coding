#pragma once

#include <cstdint>
#include <iostream>
#include <array>
#include "AdConstants.h"

namespace Ad{
    namespace Types{

        using namespace Ad::Constants;

        enum class LaneAssociationType{
            LEFT,
            CENTER,
            RIGHT,
            NONE,
        };

        struct VehicleType{
            std::int32_t id;
            LaneAssociationType lane;
            float speed_mps;
            float distance_m;
        };

        struct NeighborVehiclesType{
            // Array for nearby vehicles on left lane (2 vehicles in total)
            // Array for nearby vehicles on center lane (2 vehicles in total)
            // Array for nearby vehicles on right lane (2 vehicles in total)
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_left_lane;
            //or std::array<VehicleType, Ad::Constants::NUM_VEHICLES_ON_LANE> vehicles_left_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_center_lane;
            std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_right_lane;
        };

    } // namespace Types
} // namespace Ad
