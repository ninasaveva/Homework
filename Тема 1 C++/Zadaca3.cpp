#include <iostream>

//Задача 3
//Напиши програма каде што преку тастатура ќе може да се внеси цел број.
//Провери дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.

using namespace std;

int main ()

{
  int number;

  cin>>number;

  bool IsOddNumber = number%2==0;
  bool IsDivisibleNumberwith17 = number%17==0;

  bool condition = IsOddNumber && IsDivisibleNumberwith17;

  cout<<" The number is odd and divisible with 17 : "<<condition<<endl;

  return 0;
}
