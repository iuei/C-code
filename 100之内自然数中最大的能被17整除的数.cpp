#include<stdio.h>
#define NUM 17
int main() {
	int i = 0;
	for (i = 100; 0 != i % NUM; i--)
	{
		;
	}
	printf("100֮����Ȼ��������ܱ�17������Ϊ:%d\n", i);
	return 0;
}