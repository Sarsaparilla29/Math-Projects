#include <iostream>
#include <iomanip> //setprecision()
using namespace std;

int main(){
    // add = odd index
    // subtract = even index

    // Declare constants
    int nume = 1; // numerator constant

    // Declare variables
    int ter; // number of terms to approximate to
    double pi = 1; // PI approximated to a user value // denominator
    double deno = 1;

    // set decimal value
    cout << fixed << setprecision(10);

    // Show application header
    cout << "Welcome to Fruity Fillers" << endl;
    cout << "-------------------------" << endl;
    cout << endl;
    
    // User Input
    cout << "Enter the number of terms to approximate PI to (between 1 & 10,000 [Press 99 to exit]): ";
    cin >> ter;
   
    // Validation Loop
    while (ter < 1 || ter > 10000)
    {
        cout << "Error value is not between 1 & 10,000." << endl;
        cout << "Enter the number of terms to approximate PI to (between 1 & 10,000 [Press 99 to exit]): ";
        cin >> ter;
    }
    
    // Sentinal Loop
    while (ter != 99)
    {
        pi = 1;
        deno = 1;

        // for loop inside sentinal loop
        for (int i = 0; i < ter; i++)
        {
            double deno = i * 2 + 3;
            if (i % 2 == 0)
            {
                pi -= (nume / deno); // calculate for the even
            }
            else
            {
                pi += (nume / deno); // calculate for the odd
            }
        }

        cout << "PI to " << ter << " term(s) is: " << (4 * pi) << endl;

        // User Input
        cout << "Enter the number of terms to approximate PI to (between 1 & 10,000 [Press 99 to exit]): ";
        cin >> ter;

        // Validation Loop
        while (ter < 1 || ter > 10000)
        {
            cout << "Error value is not between 1 & 10,000." << endl;
            cout << "Enter the number of terms to approximate PI to (between 1 & 10,000 [Press 99 to exit]): ";
            cin >> ter;
        }
        
    }
   
    cout << endl;

    // Show application close
    cout << "\nEnd of Fruity Fillers" << endl;

}
