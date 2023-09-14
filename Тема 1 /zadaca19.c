#include <stdio.h>
#include <math.h>

//Задача 19
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран.
//Формула: y = a^3 + 2 / (x+b) / sqrt(5*a + pow(b,2))

int main ()

{
   float a, b, x;
   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &x);

   float y;
   y = pow(a,3)+ 2 / (x+b) / sqrt(5*a + pow(b,2));

   printf("The result is: %.2f", y);


   return 0;
}
