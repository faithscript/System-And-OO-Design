#include "Person.h"

/**
 * @brief Constructor implementation for Person class
 * 
 * @param name The person's full name
 * @param address Shared pointer to the person's address
 * @param email The person's email address
 * @param phone The person's phone number
 * 
 * Note: 
 * - All string parameters are passed by const reference to avoid copying
 * - Address is passed as a shared_ptr to manage memory automatically
 * - No validation needed as this is a base class
 */
Person::Person(const std::string& name,
              std::shared_ptr<Address> address,
              const std::string& email,
              const std::string& phone)
    : name_(name)
    , address_(std::move(address))  // Using move to avoid unnecessary copying
    , email_(email)
    , phone_(phone)
{
    // Using initialization list for better performance
}
