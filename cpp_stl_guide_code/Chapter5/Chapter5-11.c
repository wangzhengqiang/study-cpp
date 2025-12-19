/*
方法1：使用两个指针
这种方法不需要额外的数组或字符串来存储反转后的结果，直接在原字符串上进行操作。
*/

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    while (start < end) {
        // 交换字符
        char temp = *start;
        *start = *end;
        *end = temp;
        // 移动指针
        start++;
        end--;
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
