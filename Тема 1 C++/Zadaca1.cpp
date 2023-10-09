#include <iostream>

//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го збирот на броевите и провери дали збирот е парен број. Резултатот
//отпечати го на екран.

using namespace std;

int main ()

{
  int number1, number2;

  cin>>number1>>number2;

  int result = number1 + number2;

  bool isEvenNumber = result % 2 == 0;

  cout<<" The result is even number : "<<isEvenNumber<<endl;


  return 0;
}
