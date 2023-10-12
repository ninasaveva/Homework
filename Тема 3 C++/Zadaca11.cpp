#include <iostream>
#include <cmath>

//11. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Да се отпечати на екран поголемиот од броевите - “Brojot %d e pogolem od brojot
//%d”.

using namespace std;

int main()

{
    int number1, number2;

    cin>>number1>>number2;

    if(number1>number2)
    {
        cout<<"A bigger number is:  "<<number1<<endl;
    }
    else
    {
        cout<<"A bigger number is:  "<<number2<<endl;
    }

    return 0;
}
