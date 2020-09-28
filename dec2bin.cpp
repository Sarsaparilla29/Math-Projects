#include <iostream>
#include <cmath>

int main(){
	const int BASE = 2;	
	int numDec;
	int numBin;
	std::string numStr;
	std::cout<< "Welcome to Decimal Dudes" << std::endl;
	std::cout<< "------------------------" << std::endl;
	std::cout<< "Please enter a decimal number: ";
	std::cin>> numDec;
	numStr = "";
	while (numDec > 0){
		numBin = numDec%BASE;
		if (numBin == 0)
			numStr = "0" + numStr;
		else
			numStr = "1" + numStr; 
		numDec = numDec/BASE;
	}
	std::cout << "Your number in binary is: " << numStr << std::endl;
	return 0;
}
