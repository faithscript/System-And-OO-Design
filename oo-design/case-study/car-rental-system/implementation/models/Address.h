#pragma once

#include <string>

/**
 * @brief Class representing a physical address in the system
 * 
 * Design decisions:
 * 1. Using std::string for text fields to handle Unicode and avoid buffer overflows
 * 2. All members are private with public getters for encapsulation
 * 3. Constructor is explicit to prevent implicit conversions
 * 4. No setters to make the class immutable after creation
 * 
 * This class is used by:
 * - Person class for user addresses
 * - CarRentalLocation for branch locations
 */
class Address {
public:
    // Constructor is explicit to prevent implicit conversions from strings
    explicit Address(const std::string& street,
                    const std::string& city,
                    const std::string& state,
                    const std::string& zipCode,
                    const std::string& country);

    // Getters are const as they don't modify the object
    const std::string& getStreetAddress() const { return streetAddress_; }
    const std::string& getCity() const { return city_; }
    const std::string& getState() const { return state_; }
    const std::string& getZipCode() const { return zipCode_; }
    const std::string& getCountry() const { return country_; }

private:
    std::string streetAddress_;
    std::string city_;
    std::string state_;
    std::string zipCode_;
    std::string country_;
};
