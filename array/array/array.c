#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//[��������]
//ʵ��˳���Ľ������󳤶ȣ�ȡԪ�ء��޸�Ԫ�ء����롢ɾ���Ȼ���������
//[����Ҫ��]
//��1�����δӼ��̶������ݣ�����˳���
//��2�����˳����е�����Ԫ�أ�
//��3����˳���ĳ��ȣ�
//��4������ָ�������ܹ�ȡԪ�غ��޸�Ԫ�أ�
//��5��ʵ����ָ��λ�ò����ɾ��Ԫ�صĹ��ܡ�


typedef struct
{
    int* elem;
    int length;
} array;

// ����˳���
void create(array* arr)
{
    printf("������Ҫ���������Ա�ĳ��ȣ�");
    int length = 0;
    scanf("%d", &length);
    int a;
    printf("������˳�������ݣ�\n");

    arr->elem = (int*)malloc(length * sizeof(int));
    arr->length = 0;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a);
        arr->elem[arr->length++] = a;
    }
}

// ��ȡ˳�������Ԫ��
void readall(const array* arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->elem[i]);
    }
    printf("\n");
}

// ��������ȡ˳���Ԫ��
void readone(int left, int right, const array* arr)
{
    printf("����%d��С��%d������Ϊ��", left, right);
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->elem[i] > left && arr->elem[i] < right)
        {
            printf("%d ", arr->elem[i]);
        }
    }
    printf("\n");
}

// �������޸�˳���Ԫ��
void change(int left, int right, array* arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->elem[i] > left && arr->elem[i] < right)
        {
            printf("Ҫ�޸ĵ�ֵΪ��%d\n", arr->elem[i]);
            printf("������Ҫ�޸ĵ����ݣ�");
            int temp = 0;
            scanf("%d", &temp);
            arr->elem[i] = temp;
        }
    }
}

// ��ָ��λ�ò���Ԫ��
void insert(array* arr, int pos, int value)
{
    if (pos < 0 || pos > arr->length)
    {
        printf("����λ�÷Ƿ�\n");
        return;
    }

    // ��չ����ռ�
    if (arr->length == 100)
    {
        arr->elem = (int*)realloc(arr->elem, 2 * arr->length * sizeof(int));
    }

    // ����Ԫ��
    for (int i = arr->length; i > pos; i--)
    {
        arr->elem[i] = arr->elem[i - 1];
    }

    // ������Ԫ��
    arr->elem[pos] = value;
    arr->length++;
}

// ɾ��ָ��λ�õ�Ԫ��
void del(array* arr, int pos)
{
    if (pos < 0 || pos >= arr->length)
    {
        printf("ɾ��λ�÷Ƿ�\n");
        return;
    }

    // ǰ��Ԫ��
    for (int i = pos; i < arr->length - 1; i++)
    {
        arr->elem[i] = arr->elem[i + 1];
    }

    arr->length--;
}

int main()
{
    array arr;

    // ����˳���
    create(&arr);

    // ���˳�����
    printf("˳���ĳ���Ϊ%d\n", arr.length);

    // ���˳�������Ԫ��
    printf("˳����Ԫ��Ϊ��");
    readall(&arr);

    // ָ��������ȡ˳���Ԫ��
    int left, right;
    printf("������Ҫ��ȡ���ݵķ�Χ�����磺30��80����70��20��\n");
    scanf("%d,%d", &left, &right);
    if (left > right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
    readone(left, right, &arr);
    printf("\n");

    // ָ�������޸�˳���Ԫ��
    printf("������Ҫ�޸����ݵķ�Χ�����磺30��80����70��20��\n");
    scanf("%d,%d", &left, &right);
    if (left > right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
    change(left, right, &arr);
    readall(&arr);
    printf("\n");

    // ����Ԫ��
    int pos, value;
    printf("������Ҫ�����λ�ã�");
    scanf("%d", &pos);
    printf("������Ҫ�����ֵ��");
    scanf("%d", &value);
    insert(&arr, pos, value);
    printf("���������Ա�ĳ���Ϊ��%d\n", arr.length);
    printf("���������Ա�Ϊ��");
    readall(&arr);
    printf("\n");

    // ɾ��Ԫ��
    printf("������Ҫɾ����λ�ã�");
    scanf("%d", &pos);
    del(&arr, pos);

    // ����޸ĺ��˳�������Ԫ��
    printf("ɾ��������Ա�ĳ���Ϊ��%d\n", arr.length);
    printf("�޸ĺ��˳����Ԫ��Ϊ��");
    readall(&arr);


    return 0;
}

