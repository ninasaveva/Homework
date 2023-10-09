#include <iostream>
#include <cmath>


//Задача 15
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (x).
//Пронајди го резултатот (y) и отпечати го на екран.
//Формула: y = 11*x^3/5 + 12*x^7 - 3.5

using namespace std;

int main()

{
    int number1;

    cin>>number1;

    float y=11*pow(number1, 3)/5 + 12*pow(number1,7) -3.5;

    cout<<"The result is: " <<y<<endl;

    return 0;
}
