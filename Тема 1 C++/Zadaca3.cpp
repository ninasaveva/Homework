#include <iostream>

//Напиши програма каде што преку тастатура ќе може да се внеси цел број. Провери
//дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.


using namespace std;

int main ()

{
     int number;

     cin>>number;

     bool isNumberOdd = number % 2 == 1;
     bool isNumberDivisibleWith17 = number % 17 == 0;

     bool condition = isNumberOdd && isNumberDivisibleWith17;

     cout<<" The number is odd and is divisible with 17 : "<<condition<<endl;



    return 0;
}
