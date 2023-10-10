#include <iostream>
#include <cmath>


//4. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот завршува со 25.
//Соодветно да се отпечати “Brojot %d zavrsuva so 25” или “Brojot %d ne zavrsuva so
//25”.

using namespace std;

int main()

{
    int number;
    cin>>number;

    if(number / 10 == 25)
    {
        cout<<"The number edns with 25"<<endl;
    }
    else
    {
        cout<<"The number doesn't end with 25"<<endl;
    }

    return 0;
}

