//
// Created by zhengqiang.wang on 2023/11/8.
//

#include <stdio.h>

int main() {

    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    printf("菜鸟教程site: %s\n", site);

    char site1[] = "xa112345";
    printf("菜鸟教程site1: %s\n", site1);

    char *site2 = "aa122334";
    printf("菜鸟教程site2: %s\n", site2);

    return 0;
}