#include <iostream>
#include <cmath>

//Задача 11
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (r).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.
//π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата
//Формула: 4/3 * pi * r^3

using namespace std;

int main()

{

    int radius;

    cin>>radius;

    float pi = 3.14;

    float volumen = 4 / 3 * pi * pow(radius, 3);

    cout<<"The volumen is: "<<volumen<<endl;

    return 0;
}
