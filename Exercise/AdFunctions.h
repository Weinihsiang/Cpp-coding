#pragma once

#include "AdTypes.h"

namespace Ad{

// namespace Ad::Utils
    namespace Utils{
        float kph_to_mps(const float kph);
    }

// namespace Ad::Data
    namespace Data{
        Ad::Types::VehicleType init_ego_vehicle();
    }

// namespace Ad::Visualize
    namespace Visualize{
        void print_vehicle(const Ad::Types::VehicleType vehicle);
    }
}
