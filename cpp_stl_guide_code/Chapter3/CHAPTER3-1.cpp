
/*


*/


#include <vector>
#include <algorithm>

using namespace std;

bool greater2 function(int x1, int x2) { return x1 > x2; }

int main(int argc, char *argv[]) {

    vector<int> v;
    // 往容器中放了元素

    sort(v.begin(), v.end()); // 从小到大排序
    sort(v.begin(), v.end(), greater2); // 从大到小排序

    return 0;
}
