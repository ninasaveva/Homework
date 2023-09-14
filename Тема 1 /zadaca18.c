#include <stdio.h>
#include <math.h>

//Задача 18
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран.
//Формула: y = (a^4 + 7*a*b^3*x^2)^2 / sqrt(x,a)

int main ()

{
    float a, b, x;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &x);

    float y;
    y = pow((pow(a,4) + 7 * a * pow(b,3) * pow(x,2),2) / sqrt(pow(x,a));

    printf("The result is: %.2f", y);

    return 0;
}
