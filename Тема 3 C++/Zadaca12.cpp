#include <iostream>
#include <cmath>

//12. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Да се отпечати на екран помалиот од броевите - “Brojot %d e pomal od brojot %d”.

using namespace std;

int main()

{
    int number1,number2;

    cin>>number1>>number2;

    if(number1<number2)
    {
        cout<<"A smaller number is:  "<<number1<<endl;

    }
    else
    {
        cout<<"A smaller number is: "<<number2<<endl;
    }

    return 0;
}
