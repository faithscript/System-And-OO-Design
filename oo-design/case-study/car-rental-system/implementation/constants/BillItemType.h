#pragma once

/**
 * @brief Enum class representing different types of items that can appear on a bill
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Categorization of different billable items
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is used for:
 * - Billing categorization
 * - Financial reporting
 * - Customer billing
 * - Revenue tracking
 * - Service itemization
 */
enum class BillItemType {
    BASE_CHARGE = 1,         // Standard rental fee
    ADDITIONAL_SERVICE = 2,  // Extra services purchased
    FINE = 3,                // Penalties and charges
    OTHER = 4                // Miscellaneous charges
};
