#include<stdio.h>

int main() {
    int n = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp = 0;
        scanf_s("%d", &temp);
        printf("%d",cheng(temp));
    }
}
int cheng(int temp) {
    if (temp == 1) return 1;
    else
        return cheng((temp - 1)) + (2 * temp) + 1;
}