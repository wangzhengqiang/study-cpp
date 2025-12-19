1. CHAPTER4-1-class.cpp 编译如下：

g++ CHAPTER4-1-class.cpp -o CHAPTER4-1-class

g++ ./cpp_stl_guide_code/Chapter4/CHAPTER4-1-class.cpp -o ./build/CHAPTER4-1-class

提示错误

./cpp_stl_guide_code/Chapter4/CHAPTER4-1-class.cpp: In function ‘int main()’:
./cpp_stl_guide_code/Chapter4/CHAPTER4-1-class.cpp:20:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   20 |     stu.name = "wxc";

1) 第一种：

       // stu.name =  "wxc";

    stu.name = (char *) "wxc";
   第二种：



g++ ./cpp_stl_guide_code/Chapter4/CHAPTER4-1-class.cpp -o ./build/CHAPTER4-1-class
./build/CHAPTER4-1-class 
wxc的年龄是 10，成绩是 90.000000



