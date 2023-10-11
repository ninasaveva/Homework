
#include <iostream>

//
//14. Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: %d”.

using namespace std;

int main()
{
    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int min ;


    if(number1<number2 && number1<number3)
    {
        min = number1;

    }
    else if(number2<number1 && number2<number3)
    {
        min = number2;
    }
    else
    {
        min = number3;
    }
       cout<<"Min number is:"<<min<<endl;

    return 0;
}
