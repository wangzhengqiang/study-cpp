/*
https://blog.csdn.net/m0_37717595/article/details/80539957

第二种：利用栈进行递归逆序
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char g_buf[1024];

void inverse_stack(char *str1)
{
	if (str1 == NULL)  //递归结束的异常条件
	{
		return;
	}
	if (*str1 == '\0')  //递归结束的正常条件
	{
		return;
	}

	inverse_stack(str1 + 1);

    strncat(g_buf, str1, 1);

	// printf("%c \n", *str1);	
}
int  main(void)
{
	char buf[] = "abcdefg";   //buf[] 会在张栈上对全局区的字符串拷贝。
    printf("buf no inverse:%s\n", buf);
    memset(g_buf, 0, strlen(g_buf));
	inverse_stack(buf);
	printf("g_buf:%s\n", g_buf);
	system("pause");
	return 0;
}
