/*
https://blog.csdn.net/m0_37717595/article/details/80539957

第二种：利用栈进行递归逆序
改进：取消全局变量，使用局部变量
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void inverse_stack(char *str1, char *buff1)
{
	if (str1 == NULL)  //递归结束的异常条件
	{
		return;
	}
	if (*str1 == '\0')  //递归结束的正常条件
	{
		return;
	}

	inverse_stack(str1 + 1, buff1);

    strncat(buff1, str1, 1);

	// printf("%c \n", *str1);	
}
int  main(void)
{
	char buf[] = "abcdefg";   
    printf("buf no inverse:%s\n", buf);
	char g_buf[1024] = {0};
	inverse_stack(buf, g_buf);
	printf("g_buf:%s\n", g_buf);
	system("pause");
	return 0;
}
