#include <iostream>
#include <cmath>

//10. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако првиот број е делив со 8 или вториот број завршува на 4 да се пресмета
//нивната сума, во спротивно да се пресмета сума од нивните корени.
//Резултатот да се отпечати на екран.

using namespace std;

int main()

{
    int number1, number2;

    cin>>number1>>number2;

    int result;
    int sum = number1 + number2;

    if(number1 % 8 ==0  || number2 % 10==4)
    {
        result = sum;
    }
    else
    {
        result = pow(number1, 2) + pow(number2, 2);
    }

    cout<<"The result is: "<<result<<endl;
    return 0;
}
