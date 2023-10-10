#include <iostream>
#include <cmath>

//2. Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 61 и соодветно да отпечати
//“Brojot %d e deliv so 61” или “Brojot %d ne e deliv so 61”.


using namespace std;

int main()

{
    int number;
    cin>>number;

    if(number % 61 == 0)
    {
        cout<<"The number is divisible with 61"<<endl;

    }
    else
    {
        cout<<"The number is not divisible with 61"<<endl;
    }
}
