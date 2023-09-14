#include <stdio.h>
#include <math.h>

//Задача 3
//Напиши програма каде што преку тастатура ќе може да се внеси цел број. Провери
//дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.

int main ()

{
    int broj;

    scanf("%d", &broj);

    // 1 is for odd
    // 0 is for even
    int isOdd = broj % 2 != 0;

    int result = broj % 17 == 0;

    printf ("The numer is odd: %d\n", isOdd);
    printf ("The result is: %d", result);


    return 0;
}
