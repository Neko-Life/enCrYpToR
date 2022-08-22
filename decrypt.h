// 
// Shasha Decrypt
// Version: 1.0.0
// 

#ifndef SHASHA_DECRYPT_H
#define SHASHA_DECRYPT_H

#include <string>

/**
 * @brief Decrypt encrypted str using key
 *
 * @param str
 * @param key
 * @return std::string Decrypted str
 */
std::string decrypt(const std::string& str, const std::string& key);

#endif // SHASHA_DECRYPT_H
