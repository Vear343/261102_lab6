#include<iostream>
using namespace std;

int main(){

    int i = 0;
    int number[999];

    while (true){
        cout << "Enter an integer: ";
        cin >> number[i];
        if (number[i] != 0){
            i++;
        }
        else{
            break;
        }
    }

    int even = 0;
    int odd = 0;

    for (int j = 0; j < i;j++){
        if (number[j] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
