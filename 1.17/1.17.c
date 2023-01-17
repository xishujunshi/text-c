#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct stu
{
	char name[10];
	int number;

}stu;
int main()
{
	/*int a;
	scanf("%d", &a);*/
	stu an = { "anwei",2022 };
	printf("%s\n", an.name);
	printf("%d\n",an.number);
	return 0;
}