#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int compare_strings(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}

void search(char* arr1[], int size1, char* arr2[], int size2)
{
    // �����������������
    qsort(arr1, size1, sizeof(char*), compare_strings);
    qsort(arr2, size2, sizeof(char*), compare_strings);


    // �洢��ͬ���ַ���
    char** str = malloc(sizeof(char*) * 100);
    int count = 0;

    // �ڵ�һ�������н��ж��ֲ���
    for (int i = 0; i < size2; i++) {
        char* string = arr2[i];
        int low = 0, high = size1 - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int cmp = strcmp(arr1[mid], string);

            if (cmp == 0) {
                str[count++] = arr1[mid];
                break;
            }
            else if (cmp < 0) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }

    // �����ͬ���ַ���
    for (int i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }
}

int main()
{
    char* fir[100];
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // �������ʧ�ܣ����˳�ѭ��
            break;
        }
        fir[i] = _strdup(buffer);
    }
    system("cls");
    char* sec[100];
    for (int i = 0; i < 100; i++) {
        char buffer[100];
        if (fgets(buffer, 100, stdin) == NULL) {
            // �������ʧ�ܣ����˳�ѭ��
            break;
        }
        sec[i] = _strdup(buffer);
    }
    system("cls");
    search(fir, 100, sec, 100);

    return 0;
}