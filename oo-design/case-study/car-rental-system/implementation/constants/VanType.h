#pragma once

/**
 * @brief Enum class representing different types of vans in the rental system
 * 
 * Using enum class instead of raw enum for:
 * 1. Type safety - prevents implicit conversions
 * 2. Scope safety - values are scoped to the enum name
 * 3. Better encapsulation of related constants
 * 
 * Values are explicitly set to maintain consistency and allow for future additions
 * without breaking existing code that might depend on specific values.
 */
enum class VanType {
    PASSENGER = 1,  // For transporting people
    CARGO = 2       // For transporting goods
};
