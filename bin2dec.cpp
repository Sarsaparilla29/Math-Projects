#include <iostream>
#include <cmath>
#include <string>

int main(){
	//Variables	
    int sentinal = 0; 
	int numBin[0];
    std::string numStr;
	
	//Header	
	std::cout << "Welcome to Binary Dudes" << std::endl;
	std::cout << "-----------------------" << std::endl;	
	
	//User prompt	
    while (sentinal != 99){
	std::cout << "Please enter a number in binary: ";
	std::cin >> numStr; 
	
	//Determine array length
	int base = 1;
    int numDec = 0;
	int length = numStr.size();
	
	//binary to decimal calculations
	for (int i = length - 1 ; i >= 0; i--){ 
		if (numStr[i] == '1')
		numDec += base;
	base = base *2;
	}		
	//Decimal output	
	std::cout << "Your number in decimal is: " << numDec << std::endl;
    std::cout << "Enter 99 to end the program or any other to restart: ";
    std::cin >> sentinal;
    std::cout << "\n";
    }
	return 0;
}
