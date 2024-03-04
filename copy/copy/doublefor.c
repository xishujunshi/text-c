#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 假设两个字符串数组分别为array1 和 array2，长度分别为100
    char** fir = malloc(100 * sizeof(char*));
    char** sec = malloc(100 * sizeof(char*));
    printf("接下来是对第一个数组进行赋值！！！\n");
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // 如果输入失败，则退出循环
            break;
        }
        fir[i] = _strdup(buffer);
    }

    printf("接下来是对第二个数组进行赋值！！！\n");
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // 如果输入失败，则退出循环
            break;
        }
        sec[i] = _strdup(buffer);
    }

    // 遍历两个数组，比较字符串是否相等
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (strcmp(fir[i], sec[j]) == 0) {
                printf("%s\n", sec[i]);
            }
        }
    }
    return 0;
}
