#pragma once

#include <string>
#include <memory>
#include "../constants/AccountStatus.h"
#include "Person.h"

/**
 * @brief Abstract base class for all account types in the system
 * 
 * Design decisions:
 * 1. Pure virtual class to enforce implementation in derived classes
 * 2. Using smart pointers for Person to manage memory
 * 3. All members are private with protected getters for derived classes
 * 4. Virtual destructor for proper inheritance
 * 5. Pure virtual resetPassword method to be implemented by derived classes
 * 
 * This class serves as a base for:
 * - Member
 * - Receptionist
 */
class Account {
public:
    // Constructor is explicit to prevent implicit conversions
    explicit Account(const std::string& id,
                    const std::string& password,
                    std::shared_ptr<Person> person,
                    AccountStatus status = AccountStatus::ACTIVE);

    // Virtual destructor for proper inheritance
    virtual ~Account() = default;

    // Pure virtual method to be implemented by derived classes
    virtual void resetPassword() = 0;

    // Getters are const as they don't modify the object
    const std::string& getId() const { return id_; }
    const std::string& getPassword() const { return password_; }
    AccountStatus getStatus() const { return status_; }
    const std::shared_ptr<Person>& getPerson() const { return person_; }

protected:
    // Protected setters for derived classes
    void setStatus(AccountStatus status) { status_ = status; }
    void setPassword(const std::string& password) { password_ = password; }

private:
    std::string id_;
    std::string password_;
    AccountStatus status_;
    std::shared_ptr<Person> person_;  // Using smart pointer for automatic memory management
};
