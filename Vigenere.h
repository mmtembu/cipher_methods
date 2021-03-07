#ifndef VIGENERE_H
#define VIGENERE_H

#include "SubstitutionCipher.h"
#include <string>
#include <iostream>

using namespace std;

class Vigenere:public SubstitutionCipher
{
	private:
		std::string codeword;
	public:
		Vigenere(const std::string& val);
		void setCodeword(const std::string& val);
		std::string encode(const std::string& val);
		std::string decode(const std::string& val);
	protected:
		char encodeChar(char val);
		char decodeChar(char val);
};
#endif