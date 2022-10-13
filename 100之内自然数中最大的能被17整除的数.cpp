#include<stdio.h>
#define NUM 17
int main() {
	int i = 0;
	for (i = 100; 0 != i % NUM; i--)
	{
		;
	}
	printf("100之内自然数中最大能被17整除的为:%d\n", i);
	return 0;
}