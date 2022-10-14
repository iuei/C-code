#include<stdio.h>
int main(){
	int a,b,c;
	printf("输入两个数(用空格分割)：");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d+%d=%d",a,b,c);
	return 0; 
}
