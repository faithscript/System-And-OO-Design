#pragma once

/**
 * @brief Enum class representing the status of user accounts in the rental system
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Comprehensive status tracking for account lifecycle
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is crucial for:
 * - Account management
 * - Access control
 * - Security enforcement
 * - Customer service
 * - Risk management
 */
enum class AccountStatus {
    ACTIVE = 1,      // Account is in good standing and can make reservations
    CLOSED = 2,      // Account terminated by user request
    CANCELED = 3,    // Account terminated by system/admin
    BLACKLISTED = 4, // Account blocked due to violations
    BLOCKED = 5      // Temporary account suspension
};
