#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "Cipher.h"
#include <string>
#include <iostream>

class Exception
{
	protected:
		std::string error;
	public:
		Exception(const std::string& msg)
		{
			//not sure I think you need to do what we did in the previous practical
		}
	
		std::string getError()
		{
			return error;
		}
};
#endif