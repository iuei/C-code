#include <stdio.h>
int main ()
{
	int i = 2 , n;
    float fac = 1;
	printf("请输入一个正整数：\n");
	scanf("%d", &n);
	if(n == 0 || n == 1) 
	{
		printf("%d 的阶乘是1\n", n);
		return 0;
    }
	while(i <= n) 
	{
		fac = fac * i;
		i++; 
    }
	printf("%d 的阶乘是:%.2f\n", n , fac); 
	return fac;
}

