#include <stdio.h>
#include <stdlib.h>

//Задача 5:
//Напиши програма која преку тастатура ќе овозможува да се внесат две
//променливи x и y.
//Доделија апсолутната разлика помеѓу променливите a и b на променлива наречена
//absDif и прикажи го резултатот на екран. (реши ја задачата со помош на тернарен
//опратор).

int main()

{
   int number1, number2;

    printf("Enter two numbers: \n");

    scanf("%d", &number1);
    scanf("%d", &number2);

    int absDif;

    abs(number1-number2)?  (absDif = abs(number1-number2)) : (absDif = abs(number2-number1));

    printf("%d", absDif);


    return 0;
}
