#include<stdio.h>
#define MAX_STRING_LENGTH 65535
int main(){
	char s[MAX_STRING_LENGTH];
	printf("�����볤��С��%d�������ַ�:",MAX_STRING_LENGTH);
	scanf("%s",s);
	for(int i=0; s[i]; i++){
		printf("%d��ASCII�룺%d\t",s[i],s[i]);
	} 
} 
