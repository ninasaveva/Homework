#include <iostream>
#include <cmath>

//9. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако двата броеви се се деливи со 3 да се пресмета корен од нивниот производ, во
//спротивно да се пресмета сума од нивните корени.
//Резултатот да се отпечати на екран.

using namespace std;

int main()

{
    int number1,number2;

    cin>>number1>>number2;

    float result;
    int product = number1 * number2;

    if(number1 % 3 ==0  && number1 % 3 ==0)
    {
        result = sqrt(product);

    }
    else
    {
        result = pow(number1, 2) + pow(number2, 2);
    }
    cout<<"The result is:  "<<result<<endl;

    return 0;
}
