#include <stdio.h>
#include <math.h>

//Задача 8
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a, b, h). Пронајди ја плоштината (A) според наведената формула и отпечати го
//резултатот на екран.
// Формула: a+b/2 * h

int main ()

{
    int a, b, h;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    int A = a+b/2 * h;

    printf("The result is: %d", A);

    return 0;
}
