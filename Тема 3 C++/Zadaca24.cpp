#include <iostream>

//24. Да се напиши програма каде ќе биде внесен број преку тастатура (а е [0,5]) и
//бројот соодветно треба да се отпечати со букви.
//Пр. За внесен број 1, треба да се отпечати “EDEN”
//За внесен број 4, треба да се отпечати “CETIRI”

using namespace std;

int main()
{
    int number;

    cin>>number;

    //Resena zadaca so If/else

//    if(number == 0)
//    {
//        cout<<"Nula"<<endl;
//    }
//
//    if(number == 1)
//    {
//        cout<<"Eden"<<endl;
//
//    }
//    else if(number == 2)
//    {
//        cout<<"Dva"<<endl;
//
//    }
//    else if(number == 3)
//    {
//        cout<<"Tri"<<endl;
//
//    }
//    else if(number == 4)
//    {
//        cout<<"Cetiri"<<endl;
//
//    }
//    else if(number == 5)
//    {
//        cout<<"Pet"<<endl;
//    }


    //Resena zadaca so Switch

    switch(number)
    {

    case 0:
        cout<<"Nula"<<endl;
        break;

    case 1:
        cout<<"Eden"<<endl;
        break;

    case 2:
        cout<<"Dva"<<endl;
        break;

    case 3:
        cout<<"Tri"<<endl;
        break;

    case 4:
        cout<<"Cetiri"<<endl;
        break;

    case 5:
        cout<<"Pet"<<endl;
        break;

    default:
        cout<<"Other"<<endl;
    }
    return 0;
}
