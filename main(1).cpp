#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string codeWord = "MasterMind";
	string word = "{{ Hello World! }}";
	int charIntValues[word.length()];
	char intCharValues[word.length()];
	
	//was checking how to convert from int to character and the other
	//way around, ignore this code
	cout<<"Character values are: \n";
	for(int x=0;x<word.length();x++)
	{
		charIntValues[x] = (int)word[x];
		cout<<charIntValues[x]<<" ";
		
		intCharValues[x]= charIntValues[x];
		
		cout<<"Ascii character:";
		cout<<intCharValues[x]<<endl;
	}
	cout<<endl;
	
	
	//~ ----------------This is the code for encoding----------------
	
	cout<<"Code word values:\n";
	int codewordValues[word.length()];
	string codeStringValue;
	
	for(int x=0;x<word.length();x++)
	{
		codeStringValue+= codeWord;
	}
	//splits the characters to fit the size of the word
	codeStringValue = codeStringValue.substr(0,word.length());
	cout<<"Sub string value is: "<<codeStringValue<<endl;

	
	char charValue[word.length()];//final character value after the shift has been made
	int shift[word.length()];//these are the actual values changed
	int difference; //finds the difference between the first letter of the alphabet
	string finalValue;
	for(int x=0;x<word.length();x++)
	{
		difference = (int)codeStringValue[x] - 32; 
		//calculates difference between first letter and the current character
		
		finalValue+= shift[x] = difference+(int)word[x];
		//stores the ASCII ints to characters
		
		//checks whether the values are greater than the last alphabet's letter
		// then subtracts 95, since its the total number of ASCII values 
		if(shift[x]>126)
		{
			finalValue[x] = shift[x]=shift[x]-95;
		}
		//~ cout<<"Changed values: "<<charValue<<endl;
	}
	cout<<"Original value is: "<<word<<endl;
	cout<<"Final string value is: "<<finalValue<<endl;
	
	
	//~ ----------------This is the code for decoding----------------
	for(int x=0;x<word.length();x++)
	{
		difference = (int)codeStringValue[x] - 32; 
		//calculates difference between first letter and the current character
		
		finalValue+= shift[x] = difference+(int)word[x];
		//stores the ASCII ints to characters
		
		//checks whether the values are greater than the last alphabet's letter
		// then subtracts 95, since its the total number of ASCII values 
		if(shift[x]>126)
		{
			finalValue[x] = shift[x]=shift[x]-95;
		}
		//~ cout<<"Changed values: "<<charValue<<endl;
	}
	
		cout<<"Original value is: "<<word<<endl;
		cout<<"Final string value is: "<<finalValue<<endl;

	cout<<endl;
	
	
	return 0;
}