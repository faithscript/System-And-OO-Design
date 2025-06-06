#include "Vehicle.h"
#include "VehicleLog.h"

/**
 * @brief Constructor implementation for Vehicle class
 * 
 * @param licenseNum Vehicle's license plate number
 * @param stockNum Vehicle's stock/inventory number
 * @param capacity Maximum passenger capacity
 * @param barcode Vehicle's barcode for scanning
 * @param hasSunroof Whether the vehicle has a sunroof
 * @param status Current status of the vehicle
 * @param model Vehicle model
 * @param make Vehicle manufacturer
 * @param manufacturingYear Year the vehicle was manufactured
 * @param mileage Current mileage of the vehicle
 * 
 * Note: 
 * - All string parameters are passed by const reference to avoid copying
 * - Numeric parameters are passed by value as they are small
 */
Vehicle::Vehicle(const std::string& licenseNum,
                const std::string& stockNum,
                int capacity,
                const std::string& barcode,
                bool hasSunroof,
                VehicleStatus status,
                const std::string& model,
                const std::string& make,
                int manufacturingYear,
                int mileage)
    : licenseNumber_(licenseNum)
    , stockNumber_(stockNum)
    , passengerCapacity_(capacity)
    , barcode_(barcode)
    , hasSunroof_(hasSunroof)
    , status_(status)
    , model_(model)
    , make_(make)
    , manufacturingYear_(manufacturingYear)
    , mileage_(mileage)
{
    // Using initialization list for better performance
}

/**
 * @brief Adds a new log entry to the vehicle's history
 * 
 * @param log Shared pointer to the new log entry
 * 
 * Note: This method is protected to ensure logs are only added
 * through proper channels (e.g., maintenance, rental operations)
 */
void Vehicle::addLog(std::shared_ptr<VehicleLog> log) {
    logs_.push_back(std::move(log));
}
