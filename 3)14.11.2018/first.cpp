//Acesta este primul program in C
#include<cstdio>
#include<cstdlib>
#include<cmath>

int main()
{
  /*printf("Hello World \n");
  system("C:\\Windows\\System32\\ipconfig");
  system("PAUSE");
  system("SHUTDOWN /r");
  system("PAUSE");*/

  int a = 5; //declar o variabila de tip int
  int b = 7;
  int sum = a + b;
  int dif = a - b;
  int prod = a * b;

  int c = sum + 1;

  c += 1;
  c -= 1;
  c *= 2;
  c /= 2;

  //int r = a % b;
  int r = b % a;
  printf("r = %d\n", r);


  float rad = sqrt(a);
  printf("rad = %.2f\n", rad);

  //int q = 5 / 2;

  //float q = (float) (5) / 2;

  //printf("q = %.2f\n", q);
  //printf("c = %d\n", c);
  //printf("Produsul este %d \n", prod);
  //printf("Suma este %d \t diferenta este  %d \n", sum, dif);
  //printf("valoarea lui c este %d \n", c);


  system("PAUSE");
  return 0;
}