#include <iostream>
#include <cmath>

//6. Напиши програма каде што преку тастатура ќе може да се внеси еден број (а).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

using namespace std;


int main ()

{
    int number1;

    cin>>number1;

    float area=sqrt(3)/4.0 * pow(number1,2);

    cout<<" The result is : "<<area<<endl;

    return 0;
}
