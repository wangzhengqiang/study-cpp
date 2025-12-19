/*
方法3：使用额外的数组或字符串（更直观的方法）
这种方法涉及到创建一个新的数组或字符串来存储反转后的结果，然后复制回原字符串。这种方法的好处是代码更直观，但需要额外的空间。
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void reverseString(char *src, char **desc)
{
  int length = strlen(src);
  *desc = (char*)malloc(length + 1);
  if (*desc == NULL) return;
  int i;
  for (int i = 0; i < length; i++)
  {
    (*desc)[i] = src[length-1 - i];
  }
  (*desc)[length] = '\0';
}
int  main(void)
{
	char src[] = "abcdefg";   //src[] 会在张栈上对全局区的字符串拷贝。
  printf("src no inverse1:%s\n", src);
  char *reversed;
	reverseString(src, &reversed);
	printf("Reversed  string:%s\n", reversed);
  free(reversed);
	system("pause");
	return 0;
}