
#include <iostream>
#include <iostream>

//23. Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали производот на последните три цифри од бројот е парен. Резултатот
//да се отпечати на екран.

using namespace std;

int main()
{

    int number;

    cin>>number;


    int product = (number % 10) * ((number / 10)%10) * (number / 100);

    //Za brojot 973:
    //Edinici: 973 % 10 --> 3
    //Desetki: 973 / 10 -->97  97 % 10 -->7
    //Stotki: 973 / 100 --> 9

    //Proizvodot e: 3 * 7 * 9 = 189
    //The number is odd

    //Za brojot 165
    //Edinici: 165 % 10 --> 5
    //Desetki: 165 / 10 -->65   65 % 10 -->6
    //Stotki: 165 / 100 -->  1

    //Proizvodot e: 5 * 6 * 1 = 30
    //The number is even

    if(product % 2 == 0)
    {
        cout<<"The number is even."<<endl;
    }
    else
    {
        cout<<"The number is odd."<<endl;
    }
    return 0;
}
