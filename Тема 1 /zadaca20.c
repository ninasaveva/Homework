#include <stdio.h>
#include <math.h>

//Задача 20
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви
//(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран.\
//Формула: y = sqrt(pow(a,2) + 3 / 1 + (pow(b,3) / a)  /  (a/pow(b,4) + sqrt(1/(a+b))

int main ()

{
  float a, b, x;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &x);

  float y;
  y = sqrt(pow(a,2)+3) / (1+ pow(b,3)/a) / (a/pow(b,4) + sqrt(1/(a+b));

  printf("The result is: %.2f", y);

  return 0;
