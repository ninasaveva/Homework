#include <stdio.h>
#include <math.h>

//Задача 5
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(l,w,h), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.
// Формула: V=L*w*h

int main ()

{
   int l,w,h;
   scanf("%d", &l);
   scanf("%d", &w);
   scanf("%d", &h);

   int result = l * w * h;

   printf("The volumen is: %d", result);


   return 0;
}
