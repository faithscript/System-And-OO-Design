#pragma once

/**
 * @brief Enum class representing different categories of cars in the rental system
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Ordered from most economical to most luxurious
 * 3. Values are explicitly set to maintain consistency
 * 
 * The categories are based on:
 * - Vehicle size
 * - Luxury level
 * - Price point
 * - Target market segment
 */
enum class CarType {
    ECONOMY = 1,      // Most affordable, basic features
    COMPACT = 2,      // Small, fuel-efficient
    INTERMEDIATE = 3, // Mid-size, balanced features
    STANDARD = 4,     // Full-size, standard features
    FULL_SIZE = 5,    // Large, comfortable
    PREMIUM = 6,      // High-end features
    LUXURY = 7        // Top-tier, premium features
};
