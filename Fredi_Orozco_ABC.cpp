#include <iostream>

using namespace std;


int main(){

    string abecedario_1[5]= {"a", "b", "c", "d", "e"};
    string abecedario_2[5] = {"f", "g", "h", "i", "j"};
    string abecedario_junto[10];
    
    for(int i = 0; i < 5; i++){
        abecedario_junto[i] = abecedario_1[i];
        abecedario_junto[i + 5] = abecedario_2[i];

    }

    for(int i = 0; i < 10; i++){
        cout << abecedario_junto[i] << " ";
    }



    return 0;
}