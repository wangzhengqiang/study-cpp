1. 编译如下：

g++ CHAPTER1-1.cpp -o CHAPTER1-1

g++ ./cpp_stl_guide_code/Chapter1/CHAPTER1-2.cpp -o ./build/CHAPTER1-2

./build/CHAPTER1-2 111 22344


g++ ./cpp_stl_guide_code/Chapter1/CHAPTER1-3.cpp -o ./build/CHAPTER1-3

./build/CHAPTER1-3


gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-1.c -o ./build/CHAPTER2-1

./build/CHAPTER2-1

gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-2.c -o ./build/CHAPTER2-2

./build/CHAPTER2-2

gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-4.c -o ./build/CHAPTER2-4

./build/CHAPTER2-4

gcc ./cpp_stl_guide_code/Chapter2/CHAPTER2-5.c -o ./build/CHAPTER2-5

./build/CHAPTER2-5

# Chapter5

gcc ./cpp_stl_guide_code/Chapter5/Chapter5-1.c -o ./build/Chapter5-1

gcc ./cpp_stl_guide_code/Chapter5/Chapter5-2.c -o ./build/Chapter5-2

gcc ./cpp_stl_guide_code/Chapter5/Chapter5-3.c -o ./build/Chapter5-3

gcc ./cpp_stl_guide_code/Chapter5/Chapter5-4.c -o ./build/Chapter5-4

gcc ./cpp_stl_guide_code/Chapter5/Chapter5-5.c -o ./build/Chapter5-5

# Chapter6

g++ ./cpp_stl_guide_code/Chapter6/Chapter6-1.cpp -o ./build/Chapter6-1

#custom your exp
g++ ./cpp_stl_guide_code/Chapter6/Chapter6-3.cpp -o ./build/Chapter6-3
./build/Chapter6-3
My exception happened

g++ ./cpp_stl_guide_code/Chapter6/Chapter6-4.cpp -o ./build/Chapter6-4
./build/Chapter6-4 
An exception occurred. Exception Nr. 20


g++ ./cpp_stl_guide_code/Chapter6/Chapter6-5.cpp -o ./build/Chapter6-5
./build/Chapter6-5 
vector size = 0
extended vector size = 5
value of vec [0] = 0
value of vec [1] = 1
value of vec [2] = 2
value of vec [3] = 3
value of vec [4] = 4
value of v = 0
value of v = 1
value of v = 2
value of v = 3
value of v = 4

#函数模版()
g++ ./cpp_stl_guide_code/Chapter6/Chapter6-6.cpp -o ./build/Chapter6-6
./build/Chapter6-6
2
4
4

# 数组 指针 字符串应用
g++ ./cpp_stl_guide_code/Chapter6/Chapter6-7.cpp -o ./build/Chapter6-7
./cpp_stl_guide_code/Chapter6/Chapter6-7.cpp: In function ‘int main()’:
./cpp_stl_guide_code/Chapter6/Chapter6-7.cpp:9:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
    9 |   char *str1 = "abc";
      |                ^~~~~
./build/Chapter6-7
strcpy( str4, str1) : abc
strcpy( str4, str11) : dfj
strcpy( str4, str2) : 123
strcpy( str4, str4) : ccccc111

指针常量

int* const p1=new int(1);

常量指针

int const *p1=new int(1);
const int *p1=new int(1);

#指针操作
例1：
g++ ./cpp_stl_guide_code/Chapter6/Chapter6-8.cpp -o ./build/Chapter6-8
./build/Chapter6-8
var1 变量的地址： 0x7ffc29f1ab28
var2 变量的地址： 0x7ffc29f1ab2e

例2：

g++ ./cpp_stl_guide_code/Chapter6/Chapter6-9.cpp -o ./build/Chapter6-9
./build/Chapter6-9
Value of var variable:20
Address stored in ip variable:0x7ffddce80adc
Value of *ip variable:20




#C标准格式

int main( int argc, char *argv[] )  
