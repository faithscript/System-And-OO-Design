#pragma once

#include <vector>
#include <memory>
#include "Account.h"

// Forward declarations
class VehicleReservation;

/**
 * @brief Class representing a member account in the system
 * 
 * Design decisions:
 * 1. Inherits from Account base class
 * 2. Uses vector of shared pointers for reservations
 * 3. Implements resetPassword virtual method
 * 4. Tracks total vehicles reserved
 * 
 * This class represents:
 * - Regular customers of the car rental system
 * - Users who can make and manage reservations
 */
class Member : public Account {
public:
    // Constructor is explicit to prevent implicit conversions
    explicit Member(const std::string& id,
                   const std::string& password,
                   std::shared_ptr<Person> person);

    // Override virtual method from base class
    void resetPassword() override;

    // Member-specific methods
    const std::vector<std::shared_ptr<VehicleReservation>>& getReservations() const { return reservations_; }
    int getTotalVehiclesReserved() const { return totalVehiclesReserved_; }

    // Methods to manage reservations
    void addReservation(std::shared_ptr<VehicleReservation> reservation);
    void removeReservation(const std::string& reservationId);

private:
    std::vector<std::shared_ptr<VehicleReservation>> reservations_;  // Using smart pointers for automatic memory management
    int totalVehiclesReserved_{0};  // Initialize to 0
};
