#include <iostream>


//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

using namespace std;

int main ()

{
    int base, high, lenght;

    cin>>base>>high>>lenght;

    float volumen = 0.5 * base * high * lenght;

    cout<< "The volumen is : "<<volumen<<endl;


    return 0;
}
