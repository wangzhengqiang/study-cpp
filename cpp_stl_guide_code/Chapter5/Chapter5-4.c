#include<stdio.h>
#define GENERIC_MAX(type) \
type type##_max(type x, type y)\
{ \
    return (x>y?x:y); \
}

GENERIC_MAX(int) //替换到宏体内后int##_max ⽣成了新的符号 int_max做函数名
GENERIC_MAX(float) //替换到宏体内后float##_max ⽣成了新的符号 float_max做函数名
int main()
{
	//调⽤函数
	int m = int_max(8, 9);
	printf("%d\n", m);
	float fm = float_max(6.5f, 8.5f);
	printf("%f\n", fm);

	return 0;
}
