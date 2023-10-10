#include <iostream>
#include <cmath>

//3. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот завршува со цифрата 9.
//Соодветно да се отпечати “Brojot %d zavrsuva so 9” или “Brojot %d ne zavrsuva so 9”.


using namespace std;

int main()

{
    int number;
    cin>>number;

    if(number % 10 == 9)
    {
        cout<<"The number ends with 9"<<endl;

    }
    else
    {
        cout<<"The number doesn't end with 9"<<endl;
    }

    return 0;
}

