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
    using MatchId = std::uint64_t; // it identify one trade that is one buyer seller paring

    inline constexpr Price PRICE_SCALE = 10'000;

    enum class Side : std::uint8_t{
        BUY,
        SELL,
    };

    enum class OrderType : std::uint8_t {
        LIMIT,
        MARKET,
        IOC,
        FOK,
        GTC,
        STOP,
        STOP_LIMIT,
        ICEBERG,
        POST_ONLY,
    };

    enum class OrderStatus : std::uint8_t{
        NEW,
        ACCEPTED,
        PARTIALLY_FILLED,
        FILLED,
        CANCELED,
    }

    using Symbol =  std::array<char,8>;
}