#ifndef SUBSTITUTIONCIPHER_H
#define SUBSTITUTIONCIPHER_H

#include "Cipher.h"

class SubstitutionCipher:public Cipher
{
	public:
		std::string encode(const std::string &val);
		std::string decode(const std::string &val);
	protected:
		virtual char encodeChar(char val)=0;
		virtual char decodeChar(char val)=0;
};
#endif