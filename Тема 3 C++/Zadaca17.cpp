
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

    int max,min;

    int result = max - min;

    //MIN

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

    //MAX

    if(number1>number2 && number1>number3)
    {
        max = number1;

    }
    else if(number2>number1 && number2>number3)
    {
        max = number2;
    }

    else
    {
        max = number3;
    }


      cout<<"The result is: "<<result<<endl;


    return 0;
}
