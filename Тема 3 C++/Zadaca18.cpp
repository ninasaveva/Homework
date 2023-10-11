
#include <iostream>
#include <iostream>

//18. Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е поголема од 4. Резултатот да се отпечати на екран.

using namespace std;

int main()
{

  int number;

    cin>>number;

    if(number % 10 > 4){
        cout<<"The condition is true." <<endl;
    }
    else{
        cout<<"The condition is false."<<endl;
    }

    return 0;
}
