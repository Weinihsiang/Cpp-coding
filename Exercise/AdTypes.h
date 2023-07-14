#pragma once

#include <cstdint>

#include "AdConstants.h"

// Namespace: Ad::Types
namespace Ad{
    namespace Types{

        enum class LaneAssociationType{
    // Left Lane
            Left_Lane,
    // Center Lane
            Center_Lane,
    // Right Lane
            Right_Lane,
    // Unknown Lane
            Unknown,
        };

// Namespace: Ad::Types

        struct VehicleType{
    // Id
            int id;

    // Lane
            LaneAssociationType lane;

    // Speed (meter/s)
            float speed_mps;

    // Relative Distance (meter)
            float distance_m;
        };
    }
}
