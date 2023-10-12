#include <iostream>

//26. Напишете програма каде што ќе може да се внесе број од 1 до 12 кој ќе
//претставува месец од годината. За внесениот месец треба да се отпечати
//соодветното годишно време.

using namespace std;

int main()
{
    int number;

    cin>>number;

//    //Resena zadaca so If/else
////
//    if(number >=3 && number <= 5)
//    {
//        cout<<"PROLET"<<endl;
//    }
//
//    else if(number >=6 && number <=8)
//    {
//        cout<<"LETO"<<endl;
//
//    }
//    else if(number >= 9 && number <= 11)
//    {
//        cout<<"ESEN"<<endl;
//
//    }
//    else if((number >= 1 && number <= 2) || number == 12)
//    {
//        cout<<"ZIMA"<<endl;
//
//    }
//
//     else {
//        cout<<"Brojot ne pretstavuva mesec."<<endl;
//     }


    //Resena zadaca so Switch



    switch(number)
    {

    case 3:
    case 4:
    case 5:
        cout<<"PROLET"<<endl;
        break;

    case 6:
    case 7:
    case 8:
        cout<<"LETO"<<endl;
        break;

    case 9:
    case 10:
    case 11:
        cout<<"ESEN"<<endl;
        break;

    case 12:
    case 1:
    case 2:
        cout<<"ZIMA"<<endl;
        break;


    default:
        cout<<"Brojot ne pretstavuva mesec."<<endl;


    }

    return 0;
}
