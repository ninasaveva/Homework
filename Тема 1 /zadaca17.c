#include <stdio.h>
#include <math.h>

//Задача 17
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,x).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.
//Формула: у = sqrt(a^x + 2*x^3/5a/x)

int main ()

{
    float a, x;
    scanf("%f", &a);
    scanf("%f", &x);

    float y;
    y = sqrt((pow(a,x) + 2 * pow(x,3)) / 5 * a / x);

    printf("The result is: %.2f",y);


    return 0;
}
