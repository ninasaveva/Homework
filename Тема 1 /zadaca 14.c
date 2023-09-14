#include <stdio.h>
#include <math.h>

//Задача 14
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a, b).
//Пронајди го резултатот (y) и отпечати го на екран.
//Формула: y= a^3/5 + 5*a^2/b - 12*b/a^4 + 2.1



int main ()

{
    float  a, b;
    scanf("%f",&a);
    scanf("%f",&b);

    float y = pow(a,3)/5 + 5*pow(a,4)/b + 12*b/pow(a,4) + 2.1;

    printf("The result is: %.2f", y );

    return 0;
}
