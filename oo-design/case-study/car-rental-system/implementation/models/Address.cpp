#include "Address.h"

/**
 * @brief Constructor implementation for Address class
 * 
 * @param street The street address
 * @param city The city name
 * @param state The state/province
 * @param zipCode The postal/zip code
 * @param country The country name
 * 
 * Note: All parameters are passed by const reference to avoid copying
 * and to prevent modification of the original strings.
 */
Address::Address(const std::string& street,
                const std::string& city,
                const std::string& state,
                const std::string& zipCode,
                const std::string& country)
    : streetAddress_(street)
    , city_(city)
    , state_(state)
    , zipCode_(zipCode)
    , country_(country)
{
    // Using initialization list for better performance
    // No validation needed as Address is a simple data container
}
