#pragma once

#include <algorithm> // It provides things like: min , sort, max, find, fill etc
#include <array>
#include <cstdint>
#include <string_view>
#include <type_traits>

namespace exchange::core{
    using Price = std::int64_t;
    using Quantity = std::uint32_t;
    using OrderId = std::uint64_t;
    using SequenceNumber = std::uint64_t; // every state changing event in the system will get a monotonically increasing sequence number
    using Timestamp = std::uint64_t;
    using ParticipantId = std::uint32_t; //int assign at the login time

}