#include <stdio.h>
int main ()
{
	int i = 2 , n;
    float fac = 1;
	printf("������һ����������\n");
	scanf("%d", &n);
	if(n == 0 || n == 1) 
	{
		printf("%d �Ľ׳���1\n", n);
		return 0;
    }
	while(i <= n) 
	{
		fac = fac * i;
		i++; 
    }
	printf("%d �Ľ׳���:%.2f\n", n , fac); 
	return fac;
}

