
#include <iostream>
#include <iostream>

//20. Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е поголема од цифрата на десетки на бројот. Резултатот да се
//отпечати на екран.

using namespace std;

int main()
{

    int number;

    cin>>number;

    if(number % 10 > number / 10)
    {
        cout<<"The condition is true." <<endl;
    }
    else
    {
        cout<<"The condition is false."<<endl;
    }

    return 0;
}
