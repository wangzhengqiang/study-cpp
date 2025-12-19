#include <iostream>
#include <cstring>

using namespace std;

int main() 
{

  char *str1 = "abc";
  // 常量指针
  const char* str11 = "dfj";
  // 非标准常量指针
  // const char * str11 = "dfj";
  char str2[] = "123";
  char str3[10] = "ccccc111";
  char str4[13];

  //int  len ;

  // 复制 str1 到 str4
  strcpy( str4, str1);
  cout << "strcpy( str4, str1) : " << str4 << endl;

  // 复制 str11 到 str4
  strcpy( str4, str11);
  cout << "strcpy( str4, str11) : " << str4 << endl;


  strcpy( str4, str2);
  cout << "strcpy( str4, str2) : " << str4 << endl;


  strcpy(str4, str3);
  cout << "strcpy( str4, str4) : " << str4 << endl;


  return 0;
}



