#include<stdio.h>
#include<stdlib.h>

//[��������]
//ʵ�ִ�ͷ���ĵ�����Ľ������󳤶ȣ�ȡԪ�ء��޸�Ԫ�ء����롢ɾ���ȵ�����Ļ���������
//[����Ҫ��]
//��1�����δӼ��̶������ݣ�������ͷ���ĵ�����
//��2������������е�����Ԫ��
//��3��������ĳ��ȣ�
//��4������ָ�������ܹ�ȡԪ�غ��޸�Ԫ�أ�
//��5��ʵ����ָ��λ�ò����ɾ��Ԫ�صĹ��ܡ�

typedef struct ListNode {
    int data;
    struct ListNode* next;
} list;

// ��������
void readList(list* root) {
    list* current = root;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

// ��ȡָ����Χ�ڵ�����
void readRange(int min, int max, list* root) {
    list* current = root;
    while (current != NULL) {
        if (current->data > min && current->data < max) {
            printf("%d ", current->data);
        }
        current = current->next;
    }
}

// �޸�ָ����Χ�ڵ�����
void changeRange(int min, int max, list* root) {
    list* current = root;
    while (current != NULL) {
        if (current->data > min && current->data < max) {
            int num = 0;
            printf("��ǰҪ�޸ĵ�ֵΪ%d��������Ҫ�޸ĵ�����", current->data);
            scanf("%d", &num);
            current->data = num;
        }
        current = current->next;
    }
}

// ��ָ��λ�ò�������
void insertAt(int position, list* root) {
    list* current = root;
    for (int i = 1; i < position; i++) {
        if (current == NULL) {
            printf("����λ�ó��������ȣ�");
            return;
        }
        current = current->next;
    }

    int num = 0;
    printf("������Ҫ�������ֵ��");
    scanf("%d", &num);

    list* newNode = (list*)malloc(sizeof(list));
    newNode->data = num;
    newNode->next = current->next;
    current->next = newNode;
}

// ɾ��ָ��λ�õ�����
void deleteAt(int position, list* root) {
    list* current = root;
    for (int i = 1; i < position; i++) {
        if (current == NULL || current->next == NULL) {
            printf("ɾ��λ�ó��������ȣ�");
            return;
        }
        current = current->next;
    }

    list* deletedNode = current->next;
    current->next = current->next->next;
    free(deletedNode);
}


// ����ָ�����ȵ�����
list* create(int length) {
    list* head = (list*)malloc(sizeof(list));
    list* current = head;
    printf("�������������������������Ա�����\n");
    for (int i = 0; i < length; i++) {
        int num;
        scanf("%d", &num);

        current->data = num;
        if (i < length - 1) {
            current->next = (list*)malloc(sizeof(list));
            current = current->next;
        }
        else {
            current->next = NULL;
        }
    }
    return head;
}


int main() {
    int length;
    printf("������Ҫ���������Ա��ȣ�");
    scanf("%d", &length);

    list* head = create(length);
    printf("���������Ա�Ϊ��");
    readList(head);
    printf("\n");

    // �ͷ������ڴ�
    list* current = head;


    // ��ȡ���޸�ָ����Χ������
    int left = 0, right = 0;
    printf("������Ҫ��ȡ���ݵķ�Χ�����磺30��80����70��20��\n");
    scanf("%d,%d", &left, &right);
    if (left > right) {
        int temp = left;
        left = right;
        right = temp;
    }
    printf("����%d��С��%d������Ϊ��", left, right);
    readRange(left, right, head);
    printf("\n");

    printf("������Ҫ�޸����ݵķ�Χ�����磺30��80����70��20��\n");
    scanf("%d,%d", &left, &right);
    if (left > right) {
        int temp = left;
        left = right;
        right = temp;
    }
    changeRange(left, right, head);
    printf("�޸�֮�������Ϊ��");
    readList(head);
    printf("\n");

    // ָ��λ�ò�������
    int position = 0;
    printf("������Ҫ��������ݵ�λ�ã�\n");
    scanf("%d", &position);
    insertAt(position, head);
    printf("���������Ա�ĳ���Ϊ��%d\n", ++length);
    printf("�޸ĺ�����Ա�Ϊ��");
    readList(head);
    printf("\n");

    // ɾ��ָ��λ�õ�����
    printf("������Ҫɾ�������ݵ�λ�ã�\n");
    scanf("%d", &position);
    deleteAt(position, head);
    printf("ɾ��������Ա�ĳ���Ϊ��%d\n", ++length);
    printf("ɾ��������Ա�Ϊ��");
    readList(head);

    return 0;
}