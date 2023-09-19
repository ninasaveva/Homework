#include <stdio.h>
#include <stdlib.h>

//Задача 4:
//Напиши програма која преку тастатура ќе овозможува да се внесат две
//променливи x и y.
//Доделија поголемата вредност од x или y на променлива наречена maxValue и
//прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор)

int main()
{
   int number1, number2;
   
   printf("Enter two numbers:\n");
   scanf("%d", &number1);
   scanf("%d", &number2);

   int maxValue;

   (number1>number2)? printf(maxValue=number1) : printf(maxValue=number2);
   
    printf("maxValue is: %d", maxValue);


    return 0;
}
