#include <iostream>

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}
 
int main() {
	int a = 1, b = 2;
	double c = 3.1, d = 4.0;
	std::cout << Max<int>(a, b) << "\n";      // 显式实例化
	std::cout << Max(c, d) << "\n";           // 隐式实例化
	std::cout << Max<double>(c, d) << "\n" ;  // 显式实例化

	return 0;
}
