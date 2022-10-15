#include<stdio.h>
#define MAX_STRING_LENGTH 65535
int main(){
	char s[MAX_STRING_LENGTH];
	printf("请输入长度小于%d的任意字符:",MAX_STRING_LENGTH);
	scanf("%s",s);
	for(int i=0; s[i]; i++){
		printf("%d的ASCII码：%d\t",s[i],s[i]);
	} 
} 
