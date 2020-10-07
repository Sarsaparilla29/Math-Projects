//Description: This program is meant to serve as a way to easily convert a number in base 10
//             to a number in whatever base the user decides. 
#include <iostream>
#include <vector>
//user inputs num and base
//take num % base to get remainder
//divide num by base and repeat until num is less than base
//
//hexadecimal example 15 in hexadecimal is F 16 in hexadecimal is 10
int baseConverter(int num, int base){
    char hexaDecimal[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};  
    //int rem = 0;
    std::vector<int> conversion;
    int loops = 0; //keep track of number of loops for ouput later
    while(num != 0){
        int rem = 0;
        //std::cout << "rem: " << hexaDecimal[rem] << std::endl;
        //std::cout << "num: " << hexaDecimal[num] << std::endl;
        loops++;
        rem = (num % base);
        //std::cout << "num %" << " base = " << hexaDecimal[rem] << std::endl;
        num = num / base;
        conversion.push_back(rem);
    }
    //show output of decimal number converted to base
    //std::cout << "Size of conversion: " << conversion.size() << std::endl;
    std::cout << "ANSWER(in base " << base << "): "; 
    for(int i = 1; i < conversion.size() + 1; i++){
        std::cout << hexaDecimal[conversion[conversion.size() - i]]; 

    }
    std::cout << std::endl;
    return 0;
}
int main(){
    //Declare Variables
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
        'R','S','T','U','V','W','X','Y','Z'};
    
    int decimal[10] = {0,1,2,3,4,5,6,7,8,9};
    int base = 0;
    int num = 0;
    std::string sentinal = "";
    //Title
    std::cout << "------------------------------Base Converter------------------------------" << std::endl;
    std::cout << "Please enter a number in base 10 form, then enter a base to convert it to." << std::endl;
    while(sentinal != "END"){
        //declare variables
        int num = 0;
        int base = 0;
        //user input
        std::cout << "Decimal: ";
        std::cin >> num;
        std::cout << "Base: ";
        std::cin >> base;
        baseConverter(num, base);
        std::cout << "To enter another value enter any character, to END the program type END: ";
        std::cin >> sentinal;
    }
    //End of Program
    std::cout << "End of Base Converter Program" << std::endl;
    return 0;
}
