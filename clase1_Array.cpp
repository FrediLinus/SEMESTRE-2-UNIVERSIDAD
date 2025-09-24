#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    int numbers[5],mul=1;

    for (int  i = 0; i < 5; i++)
    {
        
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
        mul *= numbers[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        cout << "Number " << (i + 1) << ": " << numbers[i] << endl;
    }
    cout << "The multiplication of the numbers is: " << mul << endl;
    return 0;
    
    


}


