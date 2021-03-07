#include "Vigenere.h"

Vigenere::Vigenere(const std::string& val)
{
	codeword = val;
}

void Vigenere::setCodeword(const std::string& val)
{
	codeword = val;
}

char Vigenere::encodeChar(char val)
{	
	int difference; //finds the difference between the first letter of the alphabet
	difference = val; 
	
	//Checks whether the values are greater than the last alphabet's letter
	// then subtracts 95, since its the total number of ASCII values 
	if(difference<0)
	{
		difference = difference+256-95;
	}
	
	cout<<"Correct values: "<<difference<<endl;//remove
	
	return difference;
}

std::string Vigenere::encode(const std::string &val)
{
	std::string encoded;
	string codeStringValue;
	int intVal;
	
	for(int x=0;x<val.length();x++)
	{
		codeStringValue+= codeword;
	}
	//splits the characters to fit the size of the word
	codeStringValue = codeStringValue.substr(0,val.length());
	
	cout<<codeStringValue<<endl; //remove
	
	for(int x=0;x<val.length();x++)
	{
		intVal = (int)val[x]+(int)codeStringValue[x]-32;
		
		cout<<intVal<<endl;//remove 
		encoded+= encodeChar(intVal);//remove and fix
	}
	
	return encoded;
}

std::string Vigenere::decode(const std::string &val)
{
	std::string decoded;
	string codeStringValue;
	int intVal;
	
	for(int x=0;x<val.length();x++)
	{
		codeStringValue+= codeword;
	}
	//splits the characters to fit the size of the word
	codeStringValue = codeStringValue.substr(0,val.length());
	
	cout<<codeStringValue<<endl; //remove
	
	for(int x=0;x<val.length();x++)
	{
		intVal = (int)val[x]-(int)codeStringValue[x]-32;
		
		//~ cout<<intVal<<endl;//remove 
		decoded+= decodeChar(intVal);//remove and fix
	}
	
	return decoded;
}

char Vigenere::decodeChar(char val)
{
	int difference; //finds the difference between the first letter of the alphabet
	difference = val; 
	
	//Checks whether the values are greater than the last alphabet's letter
	// then subtracts 95, since its the total number of ASCII values 
	if(difference<32)
	{
		difference = difference+256-95;
	}
	
	//~ cout<<"Correct values: "<<difference<<endl;//remove
	
	return difference;
}