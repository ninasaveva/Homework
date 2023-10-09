#include <iostream>
#include <cmath>

//Задача 9
//Напиши програма каде што преку тастатура ќе може да се внеси еден бројј (r).
//Пронајди ја плоштината (C) според наведената формула и отпечати го резултатот
//на екран.
//π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата
//Формула: C=2*п*r

using namespace std;


int main ()

{
  int numberR;

  cin>>numberR;

  float pi = 3.14;

  float C = 2*pi*numberR;

  cout<<"The result is : "<<C<<endl;

    return 0;
}
