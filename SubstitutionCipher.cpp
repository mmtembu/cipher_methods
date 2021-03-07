#include "SubstitutionCipher.h"

std::string SubstitutionCipher::encode(const std::string &val)
{
	std::string encoded = "";
	
	for(int x=0;x<val.length();x++)
	{
		encoded+= encodeChar(val[x]);
	}
	return encoded;
}

std::string SubstitutionCipher::decode(const std::string &val)
{
	std::string decoded = "";
	
	for(int x=0;x<val.length();x++)
	{
		decoded += decodeChar(val[x]);
	}
	
	return decoded;
}