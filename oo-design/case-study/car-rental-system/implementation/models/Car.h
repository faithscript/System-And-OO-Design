#pragma once

#include "Vehicle.h"
#include "../constants/CarType.h"

/**
 * @brief Class representing a car in the rental system
 * 
 * Design decisions:
 * 1. Inherits from Vehicle base class
 * 2. Adds car-specific type information
 * 3. Implements virtual methods from base class
 * 4. Uses CarType enum for categorization
 * 
 * This class represents:
 * - Different types of cars (economy, luxury, etc.)
 * - Car-specific rental behavior
 */
class Car : public Vehicle {
public:
    // Constructor is explicit to prevent implicit conversions
    explicit Car(const std::string& licenseNum,
                const std::string& stockNum,
                int capacity,
                const std::string& barcode,
                bool hasSunroof,
                VehicleStatus status,
                const std::string& model,
                const std::string& make,
                int manufacturingYear,
                int mileage,
                CarType type);

    // Override virtual methods from base class
    void reserveVehicle() override;
    void returnVehicle() override;

    // Car-specific methods
    CarType getType() const { return type_; }

private:
    CarType type_;  // Specific type of car (economy, luxury, etc.)
};
