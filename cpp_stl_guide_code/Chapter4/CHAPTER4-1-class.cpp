#include <stdio.h>
#include <string>

class Student {
  public:
    // 类成员变量
    char *name;
    int age;
    float score;

    // 类成员函数
    void say(){
        printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
    } 
};


int main(){
    // 初始化类
    class Student stu;
    // stu.name =  "wxc";
    // 1.
    // stu.name = (char *) "wxc";
    // 2.
    // std::string str = "wxc"; // 使用std::string
    //stu.name = (char *) str.c_str();
    // 3. 
    // const char *p = "wxc"; 
    // char const *p = "wxc";
    // stu.name = (char *) p;
    // 4.
    
    char p[] = "wxc";
    stu.name= p;
    stu.age = 10;
    stu.score = 90;

    // 调用类成员函数
    stu.say();

    return 0;
}