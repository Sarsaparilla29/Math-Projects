#include <iostream>
#include <string>

int main(){
    //variables
    int numList[10];
    double actions = 0;
    std::cout << "Please input your number list to be sorted below: " << std::endl;

    //enter values for each spot in array
    for(int i = 0; i < 10; i++){
        std::cin >> numList[i];
    }
    //Bubble Sort
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9 - i; j++){
            if(numList[j] > numList[j + 1]){
                int temp = numList[j];
                numList[j] = numList[j+1];
                numList[j+1] = temp;
                actions += 3;
            } 
            actions++;
        }
    }

    //std::cout << "Sorted List: (" << correctList << ",";
    std::cout << "Sorted List: (";
    for(int i = 0; i < 10; i++){
        std::cout << numList[i];
        if(numList[i] < 10){
            std::cout << ",";
        }
        else{
            std::cout << ")";
        }
    }
    std::cout << " and " << actions << " Actions performed." << std::endl;
    std::cout << "End of program" << std::endl;
    return 0;
}
