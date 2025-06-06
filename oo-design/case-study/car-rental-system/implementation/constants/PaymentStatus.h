#pragma once

/**
 * @brief Enum class representing the status of payments in the rental system
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Comprehensive status tracking for payment lifecycle
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is essential for:
 * - Payment processing
 * - Financial reporting
 * - Customer billing
 * - Refund management
 * - Transaction tracking
 */
enum class PaymentStatus {
    UNPAID = 1,      // Payment not yet initiated
    PENDING = 2,     // Payment initiated but not confirmed
    COMPLETED = 3,   // Payment successfully processed
    FILLED = 4,      // Payment fully received
    DECLINED = 5,    // Payment rejected
    CANCELLED = 6,   // Payment cancelled before completion
    ABANDONED = 7,   // Payment process abandoned
    SETTLING = 8,    // Payment in settlement process
    SETTLED = 9,     // Payment fully settled
    REFUNDED = 10    // Payment refunded to customer
};
