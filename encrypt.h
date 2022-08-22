// 
// Shasha Encrypt
// Version: 1.0.0
// 

#ifndef SHASHA_ENCRYPT_H
#define SHASHA_ENCRYPT_H

#include <string>

/**
 * @brief Encrypt str with key
 *
 * @param str
 * @param key
 * @return std::string Encrypted str
 */
std::string encrypt(const std::string& str, const std::string& key);

#endif // SHASHA_ENCRYPT_H
