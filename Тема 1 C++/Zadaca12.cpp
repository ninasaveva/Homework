#include <iostream>
#include <cmath>


//Задача 12
//Напиши програма каде што преку тастатура ќе може да се внесе еден број (s).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.
//формула:s^3

using namespace std;

int main()

{
    int side;

    cin>>side;

    float Volumen = pow(side,3);

    cout<<"The volumen is: "<<Volumen<<endl;


    return 0;
}
