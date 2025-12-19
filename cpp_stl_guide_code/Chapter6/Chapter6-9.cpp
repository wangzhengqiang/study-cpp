#include <iostream>

using namespace std;

int main()
{
  int var = 20;
  int *ip;

  ip = &var;

  // 普通变量值
  cout << "Value of var variable:";
  cout << var << endl;

  // 指针变量的值
  cout << "Address stored in ip variable:";
  cout << ip << endl;

  // 指针值
  cout << "Value of *ip variable:";
  cout << *ip << endl;

  return 0;
}

