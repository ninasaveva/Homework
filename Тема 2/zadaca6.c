#include <stdio.h>
#include <stdlib.h>

//Задача 6:
//Напиши програма која преку тастатура ќе овозможува да се внесат три променливи
//x, y и z.
//Искористи еден израз за дa доделиш нова вредност во променливата “result”, така
//што доколку z е поголемо од 15, резултатот ќе биде збирот на x и y. Во спротивно
//резултатот ќе биде разликата на x и y.
//Прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор

int main()

{
    int number1, number2, number3;

    printf("Enter three numbers:\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    int result;

    (number3>15)? (result=(number1+number2)) : (result=(number1-number3));

    printf("The result is %d", result);

    return 0;
}
