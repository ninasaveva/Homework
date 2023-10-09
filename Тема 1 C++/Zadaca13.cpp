#include <iostream>
#include <cmath>


//Задача 13

//Напиши програма каде што преку тастатура ќе може дасе внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.
//Формула: 1/2*b*h


using namespace std;

int main()

{
   int base, height;

   cin>>base>>height;

   float area =(base * height)/2.0;

   cout<<" The area is : "<<area<<endl;


    return 0;
}
