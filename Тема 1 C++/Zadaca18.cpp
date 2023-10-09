#include <iostream>
#include <cmath>

//Задача 18
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран.
//Формула: y = (a^4 + 7*a*b^3*x^2)^2 / sqrt(x,a)

using namespace std;

int main()

{
   int a, b, x;

   cin>>a>>b>>x;

   float y = pow((pow(a,4) + 7 * a * pow(b,3) * pow(x,2)),2) / sqrt(pow(x,a));

   cout<<"The result is: "<<y<<endl;

   return 0;
}
