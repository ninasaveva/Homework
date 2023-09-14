#include <stdio.h>
#include <math.h>

//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.
//  Формула: V = 1/2*b*h*l

int main ()

{
    int b, h, l;
    scanf("%d", &b);
    scanf("%d", &h);
    scanf("%d", &l);

    int result = (0.5)*b*h*l;

    printf("The volumen is: %d", result);


    return 0;
}
