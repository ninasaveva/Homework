#include <stdio.h>
#include <math.h>

//Задача 1
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го збирот на броевите и провери дали збирот е парен број. Резултатот
//отпечати го на екран.

int main ()

{
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    int result = number1 + number2;

    // 1 for even number
    // 0 for odd number

    int isEven = result % 2 == 0;

    printf("The number is even: %d", isEven);

    return 0;

}
