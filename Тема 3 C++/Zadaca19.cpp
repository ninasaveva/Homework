
#include <iostream>
#include <iostream>

//19. Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е еднаква со цифрата на десетки. Резултатот да се отпечати
//на екран.

using namespace std;

int main()
{

    int number;

    cin>>number;

    if(number % 10 == (number / 10)%10)  // 567 % 10 -->7       567 / 10  --> 56    56 % 10 --> 6
    {
        cout<<"The condition is true." <<endl;
    }
    else
    {
        cout<<"The condition is false."<<endl;
    }

    return 0;
}
