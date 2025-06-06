#include "Account.h"

/**
 * @brief Constructor implementation for Account class
 * 
 * @param id Unique identifier for the account
 * @param password Account password
 * @param person Shared pointer to the person associated with this account
 * @param status Initial account status (defaults to ACTIVE)
 * 
 * Note: 
 * - All string parameters are passed by const reference to avoid copying
 * - Person is passed as a shared_ptr to manage memory automatically
 * - Status has a default value of ACTIVE
 */
Account::Account(const std::string& id,
                const std::string& password,
                std::shared_ptr<Person> person,
                AccountStatus status)
    : id_(id)
    , password_(password)
    , status_(status)
    , person_(std::move(person))  // Using move to avoid unnecessary copying
{
    // Using initialization list for better performance
}
