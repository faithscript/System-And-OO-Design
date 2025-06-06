#pragma once

/**
 * @brief Enum class representing different types of vehicle maintenance and service logs
 * 
 * Design decisions:
 * 1. Using enum class for type safety and scope safety
 * 2. Comprehensive tracking of vehicle maintenance history
 * 3. Values are explicitly set to maintain consistency
 * 
 * This enum is crucial for:
 * - Maintenance tracking
 * - Vehicle history
 * - Service scheduling
 * - Safety compliance
 * - Vehicle condition monitoring
 */
enum class VehicleLogType {
    ACCIDENT = 1,           // Accident or damage report
    FUELING = 2,           // Fuel refill record
    CLEANING_SERVICE = 3,  // Vehicle cleaning record
    OIL_CHANGE = 4,        // Oil change maintenance
    REPAIR = 5,            // General repair work
    OTHER = 6              // Miscellaneous maintenance
};
