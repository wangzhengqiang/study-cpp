//
// result:
//
// root@opensmarty:/home/opensmarty/Workspace/projects/study-cpp# ./build/CHAPTER2-5
// 

/*

./cpp_stl_guide_code/Chapter2/CHAPTER2-5.c: In function ‘main’:
./cpp_stl_guide_code/Chapter2/CHAPTER2-5.c:20:21: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘void *’ [-Wformat=]
   20 |         printf("p2=%d\n",p2);
      |                    ~^    ~~
      |                g++ CHAPTER1-1.cpp -o CHAPTER1-1

g++ ./cpp_stl_guide_code/Chapter1/CHAPTER1-2.cpp -o ./build/CHAPTER1-2

./build/CHAPTER1-2 111 22344


g++ ./cpp_stl_guide_code/Chapter1/CHAPTER1-3.cpp -o ./build/CHAPTER1-3

./build/CHAPTER1-3


gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-1.c -o ./build/CHAPTER2-1

gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-3.c -o ./build/CHAPTER2-3     |    |
      |                     int  void *
      |                    %p

*/


#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=10;
	int *p1=&a;              //定义整型指针p1并初始化 
	void *p2=p1;             //定义void指针p2并赋值 
	int *p3;
	p3=(int*)p2;             //强制类型转换 
	printf("*p1=%d\n",*p1);  //输出这些指针各自指向的值 
	printf("p2=%d\n",p2);  // 错误写法
	// printf("p2=%d\n",*(int*)p2);
	printf("*p3=%d\n",*p3);

	return 0;
}
