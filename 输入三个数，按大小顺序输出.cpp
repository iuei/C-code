#include<stdio.h>
#include<ctime>
#include<cstdlib>

using namespace std;
#include<stdio.h>
void swap(int*,int*);
int main()
{
	printf("输入三个待排序数:");
	int a,b,c;
	int *pa,*pb,*pc;
	
	pa=&a;
	pb=&b;
	pc=&c;
	
	scanf("%d %d %d",&a,&b,&c);
	if(*pa<*pb)
	{
		swap(pa,pb);
	 } 
	 if(*pa<*pc)
	 {
	 	swap(pa,pc); 
	 }
	 if(*pb<*pc)
	 {
	 	swap(pb,pc);
	 }
	 printf("排序后的结果:");
	 printf("%d %d %d",*pa,*pb,pc);
	 return 0;
 } 
 void swap(int *p,int *q)
 {
 	int temp;
 	temp=*p;
 	*p=*q;
 	*q=temp;
 }
