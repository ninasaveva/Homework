
#include <iostream>
#include <iostream>

//21. Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали цифрите на единици, десетки и стотки се еднакви. Резултатот да се
//отпечати на екран.

using namespace std;

int main()
{

    int number;

    cin>>number;

    if(number % 10 == (number / 10)%10  &&   ((number / 10)%10) == number / 100)
    {
        cout<<"The condition is true." <<endl;
    }
    else
    {
        cout<<"The condition is false."<<endl;
    }

    return 0;
}

