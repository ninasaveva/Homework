#include <iostream>
#include <cmath>

//Задача 10
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (r, h).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.
//π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата
//Формула: V= pi * r^2 * h

using namespace std;


int main ()


{
    int radius, height;

    cin>>radius>>height;

    float pi = 3.14;

    float Volumen = pi * pow(radius, 2) * height;

    cout<<" The volumen is: " <<Volumen<<endl;

    return 0;
}
