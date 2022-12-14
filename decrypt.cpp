/*
   decrypt.cpp and decrypt.h

   Shasha Decrypt

   Version: 1.0.0

   Copyright (C) 2022 Shasha

   This source code is provided 'as-is', without any express or implied
   warranty. In no event will the author be held liable for any damages
   arising from the use of this software.

   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:

   1. The origin of this source code must not be misrepresented; you must not
      claim that you wrote the original source code. If you use this source code
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original source code.

   3. This notice may not be removed or altered from any source distribution.

   Shasha nekolife123579@gmail.com

*/

#include <vector>
#include <string>
#include <functional>
#include "decrypt.h"
#include "base64.h"

std::string decrypt(const std::string& str, const std::string& key) {
   const size_t len = str.length();
   srand(std::hash<std::string>{}(key));

   char ret[len + 1];
   ret[len] = '\0';

   std::vector<size_t> ori = {};
   ori.reserve(len);

   for (size_t i = 0; i < len; i++) ori.push_back(i);

   auto io = ori.begin();
   size_t count = 0;
   while (io != ori.end())
   {
      size_t r2 = rand() % ori.size();
      auto it = io + r2;
      ret[*it] = str.at(count);
      count++;
      ori.erase(it);
   }

   return base64_decode(std::string(ret));
}
