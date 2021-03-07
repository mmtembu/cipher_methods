#ifndef TRANSPOSITION_H
#define TRANSPOSITION_H

#include "Cipher.h"

class TranspositionCipher:public Cipher
{
	std::string encode(const std::string val);
	std::string decode(const std:: string val);
};
#endif