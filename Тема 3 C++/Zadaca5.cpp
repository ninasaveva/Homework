#include <iostream>
#include <cmath>

//5. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 3 и завршува со цифрата 5.
//Соодветно да се отпечати “Brojot %d e deliv so 3 i zavrsuva so 5” или “Brojot %d ne
//go ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5”.


using namespace std;

int main()

{
    int number;
    cin>>number;

    if(number % 3 == 0  && number % 10 == 5)
    {
        cout<<"The number is divisible with 3 and the number ends with 5"<<endl;

    }
    else
    {
        cout<<"The number is not divisible with 3 and the number doesn't end with 5"<<endl;
    }
    return 0;
}
