#include <string>
#include <stdio.h>
#include "encrypt.h"
#include "decrypt.h"

int main(const int argc, const char* argv[]) {
    if (argc < 3)
    {
        printf("Usage: <key> <str>\n");
        return 1;
    }

    const std::string key(argv[1]);
    const std::string str(argv[2]);

    const std::string en = encrypt(str, key);

    printf("encrypted: '%s'\n", en.c_str());
    printf("decrypted: '%s'\n", decrypt(en, key).c_str());
    return 0;
}
