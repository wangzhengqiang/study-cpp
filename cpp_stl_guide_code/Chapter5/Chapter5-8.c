/*
https://blog.csdn.net/m0_37717595/article/details/80539957

第一种：指针两头堵模型
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int inverse(char *str1)
{
	int length = 0;
	char *p1 = NULL;
	char *p2 = NULL;
	if (str1 == NULL)
	{
		return -1;
	}
	length  = strlen(str1);
	p1 = str1;                 //指针指向字符串的开头;
	p2 = str1 + (length - 1);  //指针指向字符串的最后一个;
	while (p1 < p2)
	{
		char c = *p1;
		*p1 = *p2;
		*p2 = c;
		++p1;
		--p2;
	}
	return 0;
}
int  main(void)
{
	char buf[] = "abcdefg";   //buf[] 会在张栈上对全局区的字符串拷贝。
        printf("buf no inverse:%s\n", buf);
	inverse(buf);
	printf("buf:%s\n", buf);
	system("pause");
	return 0;
}
