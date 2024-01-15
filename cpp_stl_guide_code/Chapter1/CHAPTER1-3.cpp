// ļCHAPTER1-1-3.cpp
// 内置函数应用
#include <iostream>

using namespace std;

// 声明内置函数，交换两个数的值
inline void swap(int *a, int *b) 
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char* argv[], char** env)
{
   int m, n;

   cin >> m >> n;
   cout << m << "," << n << endl;
   swap(&m, &n);

   cout << m << "," << n << endl;

    return 0;		
}
