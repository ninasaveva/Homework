#include <iostream>
#include <cmath>

//Задача 8
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a, b, h). Пронајди ја плоштината (A) според наведената формула и отпечати го
//резултатот на екран.
// Формула: (a+b)/2 * h

using namespace std;


int main ()

{
   int a, b, h;
   cin>>a>>b>>h;

   float Area = (a+b)/2*h;

   cout<<"The area is: "<<Area<<endl;

    return 0;
}
