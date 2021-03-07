#ifndef CIPHER_H
#define CIPHER_H

#include <string>

class Cipher{
	virtual std::string encode(const std::string& val)=0;
	virtual std::string decode(const std::string& val) = 0;
};
#endif