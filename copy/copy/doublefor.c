#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // ���������ַ�������ֱ�Ϊarray1 �� array2�����ȷֱ�Ϊ100
    char** fir = malloc(100 * sizeof(char*));
    char** sec = malloc(100 * sizeof(char*));
    printf("�������ǶԵ�һ��������и�ֵ������\n");
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // �������ʧ�ܣ����˳�ѭ��
            break;
        }
        fir[i] = _strdup(buffer);
    }

    printf("�������ǶԵڶ���������и�ֵ������\n");
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // �������ʧ�ܣ����˳�ѭ��
            break;
        }
        sec[i] = _strdup(buffer);
    }

    // �����������飬�Ƚ��ַ����Ƿ����
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (strcmp(fir[i], sec[j]) == 0) {
                printf("%s\n", sec[i]);
            }
        }
    }
    return 0;
}
