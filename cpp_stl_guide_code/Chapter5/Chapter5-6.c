#include <stdio.h>
#include <string.h>
int main () {
  // 空指针
  char *str1 = NULL;
  if(str1 != NULL && *str1 == '\0'){
   printf("*str1 is empty. \n"); 
  }else {
    str1 = "111saaac";

    printf("str1=%s len=%d\n", str1, (int)strlen(str1));
  }
  return 0;
}

