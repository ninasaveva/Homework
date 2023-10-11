
#include <iostream>
#include <iostream>

//22. Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали сумата од цифрите на единици и десетки е еднаква со цифрата на
//стотки. Резултатот да се отпечати на екран.

using namespace std;

int main()
{

    int number;

    cin>>number;

    int sum = (number % 10) + ((number / 10)%10);

     //Edinici: 973 % 10 --> 3
     //Desetki: 973 / 10 -->97  97 % 10 -->7  poradi toa pisuvame  ((number / 10)%10 )
     //Stotki: 973 / 100 --> 9

    if(sum == number / 100)
    {
        cout<<"The condition is true." <<endl;    //za 972 ke bide true
    }
    else
    {
        cout<<"The condition is false."<<endl;    //za 973 ke e false
    }

    return 0;
}
