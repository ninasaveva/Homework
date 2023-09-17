#include <stdio.h>
#include <math.h>

//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.
//  Формула: V = 1/2*b*h*l

int main ()
float b, h, l;

    scanf("%f", &b);
    scanf("%f", &h);
    scanf("%f", &l);

    float result = (b*h*l)/2;

    printf("The volumen is: %.2f", result);

    return 0;

// 1 error, 2 warnings

