
#include <iostream>

//
//15. Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најголемиот од броевите - “MAX: %d”.
using namespace std;

int main()
{
    int number1, number2, number3, number4;

    cin>>number1>>number2>>number3>>number4;

    int max ;


    if(number1>number2 && number1>number3 && number1>number4)
    {
        max = number1;

    }
    else if(number2>number1 && number2>number3  && number2>number3)
    {
        max = number2;
    }
    else if(number3>number1 && number3>number2 && number3>number4)
    {
        max = number3;
    }
    else
    {
        max = number4;
    }
    cout<<"Max number is:"<<max<<endl;

    return 0;
}
