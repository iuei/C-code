#include<iostream>
#include<ctime>
#include<cstdlib>
 using namespace std;
#include<stdio.h>
#define N 10
int main(){
	int a[N],i,j,temp;
	printf("请输入十个数：");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		int min;
		for(i=0;i<N-1;i++)
		{
			min=i;
			for(j=i+1;j<N;j++)
			{
				if(a[j]<a[min])min=j;
			}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp	;
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
} 
