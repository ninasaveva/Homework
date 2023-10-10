#include <iostream>
#include <cmath>

//6. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 6 или завршува со цифрата
//4. Соодветно да се отпечати “Brojot %d e deliv so 6 ili zavrsuva so 4” или “Brojot %d ne
//go ispolnuva uslovot da e deliv so 6 ili da zavrsuva so 4”.

using namespace std;

int main()

{
    int number;
    cin>>number;

    if(number % 6 == 0 || number % 10 == 4)
    {
        cout<<"The number is divisible with 6 or the number ends with 4"<<endl;

    }

    else
    {
        cout<<"The condition is false"<<endl;
    }
    return 0;
}
