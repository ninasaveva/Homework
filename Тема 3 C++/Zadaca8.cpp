#include <iostream>
#include <cmath>

//8. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако двата броеви се позитивни да се пресмета квадрат од нивната сума, во
//спротивно да се пресмета сума од нивните квадрати.
//Резултатот да се отпечати на екран.

using namespace std;

int main()

{
    int number1, number2;
    cin>>number1>>number2;

    int result;
    int sum = number1 + number2;

    if(number1 > 0 && number2 > 0)
    {
        result = pow(sum,2);

    }
    else
    {
        result = pow(number1,2) + pow(number2,2);
    }

    cout<<"The result is: "<<result<<endl;

    return 0;
}
