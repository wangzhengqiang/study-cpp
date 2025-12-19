#include<stdio.h>

#define PRINT(n, format)  printf("the value of "#n" is "format"\n", n)

int main()
{

  int a = 10;
  //printf("the value of a is %d\n", a);
  PRINT(a, "%d");
 
  float f = 3.14f;
  //printf("the value of f is %f\n", f);
  PRINT(f, "%f");

  return 0;
}
