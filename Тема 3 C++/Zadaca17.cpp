
#include <iostream>
#include <iostream>

//17. Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се определи разликата помеѓу најголемиот и најмалиот број и да се отпечати на
//екран резултатот.

using namespace std;

int main()
{

    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int Max,Min;

    //MIN

    if(number1<number2 && number1<number3)
    {
        Min = number1;

    }
    else if(number2<number1 && number2<number3)
    {
        Min = number2;
    }

    else
    {
        Min = number3;
    }

    //MAX

    if(number1>number2 && number1>number3)
    {
        Max = number1;

    }
    else if(number2>number1 && number2>number3)
    {
        Max = number2;
    }

    else
    {
        Max = number3;
    }

    int result = Max - Min;

    cout<<"The result is: "<<result<<endl;


    return 0;
}
