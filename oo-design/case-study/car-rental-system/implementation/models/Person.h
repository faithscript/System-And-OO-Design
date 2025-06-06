#pragma once

#include <string>
#include <memory>
#include "Address.h"

/**
 * @brief Base class representing a person in the system
 * 
 * Design decisions:
 * 1. Using std::string for text fields to handle Unicode
 * 2. Using smart pointer for Address to manage memory automatically
 * 3. All members are private with public getters for encapsulation
 * 4. Constructor is explicit to prevent implicit conversions
 * 5. Virtual destructor for proper inheritance
 * 
 * This class serves as a base for:
 * - Member
 * - Receptionist
 * - AdditionalDriver
 */
class Person {
public:
    // Constructor is explicit to prevent implicit conversions
    explicit Person(const std::string& name,
                   std::shared_ptr<Address> address,
                   const std::string& email,
                   const std::string& phone);

    // Virtual destructor for proper inheritance
    virtual ~Person() = default;

    // Getters are const as they don't modify the object
    const std::string& getName() const { return name_; }
    const std::shared_ptr<Address>& getAddress() const { return address_; }
    const std::string& getEmail() const { return email_; }
    const std::string& getPhone() const { return phone_; }

private:
    std::string name_;
    std::shared_ptr<Address> address_;  // Using smart pointer for automatic memory management
    std::string email_;
    std::string phone_;
};
