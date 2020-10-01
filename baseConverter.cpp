#include <iostream>
void hexadecimal(int dec){
    int arr[16];
    for(int i = 0; i < 16; i++){
        arr[i] = dec % 16;
    }
}

int main(){
    //Declare Variables
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
        'R','S','T','U','V','W','X','Y','Z'};
    char hexaDecimal[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int decimal[10] = {0,1,2,3,4,5,6,7,8,9};
    int input = 0;

    //User input
    std::cout << "Please enter a number in decimal form";
    cin >> input;
    hexadecimal(input);
    //End of Program
    return 0;
}
