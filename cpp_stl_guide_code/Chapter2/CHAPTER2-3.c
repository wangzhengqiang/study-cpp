//
// Created by zhengqiang.wang on 2023/11/8.
//
// result:
//
// ./build/CHAPTER2-3
// Enter value:2aa22  2
// 
// You entered: 2aa22 2
//
//

#include <stdio.h>

int main() {

    char site[100];
    int i;
    printf("Enter value:");
    scanf("%s %d", site, &i);

    printf( "\nYou entered: %s %d ", site, i);
    printf("\n");

    return 0;
}
