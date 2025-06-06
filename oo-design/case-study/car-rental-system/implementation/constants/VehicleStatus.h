#pragma once

/**
 * @brief Enum class representing the current status of a vehicle in the rental system
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Comprehensive status tracking for inventory management
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is crucial for:
 * - Inventory management
 * - Reservation system
 * - Vehicle tracking
 * - Maintenance scheduling
 * - Customer service
 */
enum class VehicleStatus {
    AVAILABLE = 1,        // Ready for rental
    RESERVED = 2,         // Booked but not yet picked up
    LOANED = 3,           // Currently rented out
    LOST = 4,             // Missing or stolen
    BEING_SERVICED = 5,   // Under maintenance
    OTHER = 6             // Catch-all for unexpected states
};
