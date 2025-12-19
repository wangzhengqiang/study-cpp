/*
方法2：使用递归
递归方法虽然简洁，但在处理非常长的字符串时可能会导致栈溢出。
*/

#include <stdio.h>
#include <string.h>

void reverseUtil(char *str, int start, int end) {
    if (start >= end) return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseUtil(str, start + 1, end - 1);
}

void reverseString(char *str) {
    int length = strlen(str);
    reverseUtil(str, 0, length - 1);
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
