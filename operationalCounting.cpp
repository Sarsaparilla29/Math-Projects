#include <iostream>

int main(){
    //variables
    int numLoops = 0;
    int num = 0;
    int ans1 = 0;
    int ans2 = 0;
    std::cout << "Please Enter a Number" << std::endl;
    std::cout << "Number: ";
    std::cin >> num;
    //loop method
    for(int i = 1; i <= num; i++){
        ans1 += i;
        numLoops++;
    }
    //formula method
    ans2 = (num * (num + 1))/2;
    
    //output
    std::cout << "Answer1(loop method): " << ans1 << std::endl;
    std::cout << "Number of Operations: " << numLoops - 1 << std::endl;
    std::cout << "Answer2(formula method): " << ans2 << std::endl;
    std::cout << "Number of Operations: 3" << std::endl;
    //end of program
    std::cout << "End of Operational Counting" << std::endl;
    return 0;
}
