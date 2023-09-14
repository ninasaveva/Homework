#include <stdio.h>
#include <math.h>

//Задача 15
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (x).
//Пронајди го резултатот (y) и отпечати го на екран.
//Формула: y = 11*x^3/5 + 12*x^7 - 3.5

int main ()

{
    float x;
    scanf("%f", &x);

    float y = 11* pow(x,3)/5 + 12* pow(x,7) - 3.5;

    printf("The result is: %.2f", y);

    return 0;
}
