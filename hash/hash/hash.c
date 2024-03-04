#include<stdio.h>
#include<string.h>
#include<stdlib.h>

sturct Hash{
	char* a[];
int code;
}
Hash str[100];
int main() {
	str[1] = { "abc",10 };
	printf("%d", str[1].code);
	return 0;
}