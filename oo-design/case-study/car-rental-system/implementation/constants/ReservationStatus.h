#pragma once

/**
 * @brief Enum class representing the status of a vehicle reservation
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Comprehensive status tracking for reservation lifecycle
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is essential for:
 * - Reservation management
 * - Customer communication
 * - Billing and payment processing
 * - Vehicle allocation
 * - System state management
 */
enum class ReservationStatus {
    ACTIVE = 1,      // Currently in use
    PENDING = 2,     // Awaiting confirmation
    CONFIRMED = 3,   // Approved and scheduled
    COMPLETED = 4,   // Successfully finished
    CANCELLED = 5,   // Terminated before completion
    NONE = 6         // Initial state or reset state
};
