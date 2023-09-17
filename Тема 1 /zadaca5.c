#include <stdio.h>
#include <math.h>

//Задача 5
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(l,w,h), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.
// Формула: V=L*w*h


int main ()

{
   float l,w,h;
   scanf("%f", &l);
   scanf("%f", &w);
   scanf("%f", &h);

   float result = l * w * h;

   printf("The volumen is: %.2f", result);


   return 0;
}

