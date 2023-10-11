
#include <iostream>

//
//16. Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: %d”.
using namespace std;

int main()
{

  int number1, number2, number3, number4;

    cin>>number1>>number2>>number3>>number4;

    int min ;


    if(number1<number2 && number1<number3 && number1<number4)
    {
        min = number1;

    }
    else if(number2<number1 && number2<number3  && number2<number3)
    {
        min = number2;
    }
    else if(number3<number1 && number3<number2 && number3<number4)
    {
        min = number3;
    }
    else
    {
        min = number4;
    }
    cout<<"Min number is:"<<min<<endl;

    return 0;
}
