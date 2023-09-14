#include <stdio.h>
#include <math.h>

//Задача 2
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го нивниот производ и провери дали нивниот производ е делив со бројот
//7 или со бројот 13. Резултатот отпечати го на екран.

int main ()

{
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    int result = number1 * number2;

    printf("The result is: %d\n", result %7 == 0);
    printf("The result is: %d", result %13 == 0);


    return 0;
}
