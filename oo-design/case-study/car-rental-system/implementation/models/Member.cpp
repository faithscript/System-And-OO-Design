#include "Member.h"
#include "VehicleReservation.h"

/**
 * @brief Constructor implementation for Member class
 * 
 * @param id Unique identifier for the member account
 * @param password Account password
 * @param person Shared pointer to the person associated with this account
 * 
 * Note: 
 * - Delegates to base class constructor
 * - Initializes member-specific data
 */
Member::Member(const std::string& id,
              const std::string& password,
              std::shared_ptr<Person> person)
    : Account(id, password, person)
{
    // Base class constructor handles initialization of Account members
}

/**
 * @brief Implementation of resetPassword virtual method
 * 
 * Note: This is a placeholder implementation.
 * In a real system, this would:
 * 1. Generate a new password
 * 2. Hash the password
 * 3. Update the stored password
 * 4. Notify the user
 */
void Member::resetPassword() {
    // TODO: Implement password reset logic
}

/**
 * @brief Adds a new reservation to the member's account
 * 
 * @param reservation Shared pointer to the new reservation
 */
void Member::addReservation(std::shared_ptr<VehicleReservation> reservation) {
    reservations_.push_back(std::move(reservation));
    ++totalVehiclesReserved_;
}

/**
 * @brief Removes a reservation from the member's account
 * 
 * @param reservationId ID of the reservation to remove
 */
void Member::removeReservation(const std::string& reservationId) {
    // TODO: Implement reservation removal logic
    // This would typically:
    // 1. Find the reservation by ID
    // 2. Remove it from the vector
    // 3. Update totalVehiclesReserved_
}
