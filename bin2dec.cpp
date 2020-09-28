#include <iostream>
#include <cmath>
#include <string>

int main(){
	//Variables	
	int numDec = 0;
	int numBin[0];
	std::string numStr;
	
	//Header	
	std::cout << "Welcome to Binary Dudes" << std::endl;
	std::cout << "-----------------------" << std::endl;	
	
	//User prompt	
	std::cout << "Please enter a number in binary: ";
	std::cin >> numStr; 
	
	//Determine array length
	int base = 1;
	int length = numStr.size();
	
	//binary to decimal calculations
	for (int i = length - 1 ; i >= 0; i--){ 
		if (numStr[i] == '1')
		numDec += base;
	base = base *2;
	}		
	//Decimal output	
	std::cout << "Your number in decimal is: " << numDec << std::endl;
	return 0;
}
