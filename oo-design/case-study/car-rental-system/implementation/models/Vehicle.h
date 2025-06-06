#pragma once

#include <string>
#include <vector>
#include <memory>
#include "../constants/VehicleStatus.h"
#include "../constants/VehicleLogType.h"

// Forward declarations
class VehicleLog;

/**
 * @brief Abstract base class for all vehicle types in the system
 * 
 * Design decisions:
 * 1. Pure virtual class to enforce implementation in derived classes
 * 2. Using smart pointers for logs to manage memory
 * 3. All members are private with protected getters for derived classes
 * 4. Virtual destructor for proper inheritance
 * 5. Pure virtual methods for vehicle-specific behavior
 * 
 * This class serves as a base for:
 * - Car
 * - Van
 * - Truck
 */
class Vehicle {
public:
    // Constructor is explicit to prevent implicit conversions
    explicit Vehicle(const std::string& licenseNum,
                    const std::string& stockNum,
                    int capacity,
                    const std::string& barcode,
                    bool hasSunroof,
                    VehicleStatus status,
                    const std::string& model,
                    const std::string& make,
                    int manufacturingYear,
                    int mileage);

    // Virtual destructor for proper inheritance
    virtual ~Vehicle() = default;

    // Pure virtual methods to be implemented by derived classes
    virtual void reserveVehicle() = 0;
    virtual void returnVehicle() = 0;

    // Getters are const as they don't modify the object
    const std::string& getLicenseNumber() const { return licenseNumber_; }
    const std::string& getStockNumber() const { return stockNumber_; }
    int getPassengerCapacity() const { return passengerCapacity_; }
    const std::string& getBarcode() const { return barcode_; }
    bool hasSunroof() const { return hasSunroof_; }
    VehicleStatus getStatus() const { return status_; }
    const std::string& getModel() const { return model_; }
    const std::string& getMake() const { return make_; }
    int getManufacturingYear() const { return manufacturingYear_; }
    int getMileage() const { return mileage_; }
    const std::vector<std::shared_ptr<VehicleLog>>& getLogs() const { return logs_; }

protected:
    // Protected setters for derived classes
    void setStatus(VehicleStatus status) { status_ = status; }
    void setMileage(int mileage) { mileage_ = mileage; }
    void addLog(std::shared_ptr<VehicleLog> log);

private:
    std::string licenseNumber_;
    std::string stockNumber_;
    int passengerCapacity_;
    std::string barcode_;
    bool hasSunroof_;
    VehicleStatus status_;
    std::string model_;
    std::string make_;
    int manufacturingYear_;
    int mileage_;
    std::vector<std::shared_ptr<VehicleLog>> logs_;  // Using smart pointers for automatic memory management
};
