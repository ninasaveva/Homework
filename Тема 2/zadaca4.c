#include <stdio.h>
#include <stdlib.h>

//Задача 4:
//Напиши програма која преку тастатура ќе овозможува да се внесат две
//променливи x и y.
//Доделија поголемата вредност од x или y на променлива наречена maxValue и
//прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор)

int main()
{
   int x, y;
   scanf("%d", &x);
   scanf("%d", &y);

   int maxValue;

   (x>y)? printf(maxValue=x) : printf(maxValue=y);
    printf("maxValue is: %d", maxValue);


    return 0;
}
