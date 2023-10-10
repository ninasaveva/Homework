#include <iostream>
#include <cmath>

//1. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот се наоѓа во интервал од 30 до 50 и
//соодветно треба да се отпечати “Brojot %d pripaga na intervalot [30, 50]”.

using namespace std;

int main()

{
    int broj;
    cin>>broj;

    if(broj>=30 && broj<=50)
    {

        cout<<"Brojot pripaja na intervalot [30, 50]." <<endl;

    }
    else
    {
        cout<<"Brojot ne pripagja na intervalot [30, 50]."<<endl;
    }
}
