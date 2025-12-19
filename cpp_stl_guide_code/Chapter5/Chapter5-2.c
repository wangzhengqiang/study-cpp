#include<stdio.h>

#define DEBUG_PRINT printf("file:%s\t line:%d\t date:%s\t time:%s\n" \
                             ,__FILE__, \
                             __LINE__ , \
                             __DATE__,   \
                             __TIME__ )
int main()
{
  DEBUG_PRINT;
  return 0;
}
