#include <iostream>

//25. Напишете програма каде што ќе може да се внесе број од 1 до 12 и за истиот да се
//испечати соодветниот месец во годината
//Пр. За внесен број 3, треба да се отпечати “MART”
//За внесен број 12, треба да се отпечати “DEKEMVRI”

using namespace std;

int main()
{
    int number;

    cin>>number;

    //Resena zadaca so If/else
//
//    if(number == 1)
//    {
//        cout<<"JANUARI"<<endl;
//    }
//
//    if(number == 2)
//    {
//        cout<<"FEVRUARI"<<endl;
//
//    }
//    else if(number == 2)
//    {
//        cout<<"Dva"<<endl;
//
//    }
//    else if(number == 3)
//    {
//        cout<<"MART"<<endl;
//
//    }
//    else if(number == 4)
//    {
//        cout<<"APRIL"<<endl;
//
//    }
//    else if(number == 5)
//    {
//        cout<<"MAJ"<<endl;
//    }
//
//    else if(number == 6)
//    {
//        cout<<"JUNI"<<endl;
//    }
//
//
//    else if(number == 7)
//    {
//        cout<<"JULI"<<endl;
//    }
//
//    else if(number == 8)
//    {
//        cout<<"AVGUST"<<endl;
//    }
//
//    else if(number == 9)
//    {
//        cout<<"SEPTEMVRI"<<endl;
//    }
//
//    else if(number == 10)
//    {
//        cout<<"OKTOMVRI"<<endl;
//    }
//
//    else if(number == 11)
//    {
//        cout<<"NOEMVRI"<<endl;
//    }
//
//    else if(number == 12)
//    {
//        cout<<"DEKEMRVI"<<endl;
//    }
//     else {
//        cout<<"Brojot ne pretstavuva mesec."<<endl;
//     }


    //Resena zadaca so Switch



    switch(number)
    {

    case 1:
        cout<<"JANUARI"<<endl;
        break;

    case 2:
        cout<<"FEVRUARI"<<endl;
        break;

    case 3:
        cout<<"MART"<<endl;
        break;

    case 4:
        cout<<"APRIL"<<endl;
        break;

    case 5:
        cout<<"MAJ"<<endl;
        break;

    case 6:
        cout<<"JUNI"<<endl;
        break;

    case 7:
        cout<<"JULI"<<endl;
        break;

    case 8:
        cout<<"AVGUST"<<endl;
        break;


    case 9:
        cout<<"SEPTEMVRI"<<endl;
        break;


    case 10:
        cout<<"OKTOMVRI"<<endl;
        break;


    case 11:
        cout<<"NOEMVRI"<<endl;
        break;


    case 12:
        cout<<"DEKEMVRI"<<endl;
        break;

    default:
        cout<<"Brojot ne pretstavuva broj."<<endl;

    
    }

    return 0;
}
