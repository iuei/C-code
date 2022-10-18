#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
 void printBinaryDigitIntoFile(FILE*fp,int i)
 {
 	assert(i>=0&&i<=255);
 	 char str[20];
 	 int r=2;
 	 itoa(i,str,r);
 	 
 	 int length=strlen(str);
 	 int j;
 	 for(j=length;j<8;j++)
 	 fprintf(fp,"0");
 	 
 	fprintf(fp,"%s\n",str);
 }
 
 int main()
 {
 	FILE*fp=fopen("myData.txt","w");
	 int i;
	 for(i=0;i<=255;i++)
	 {
	 	printBinaryDigitIntoFile(fp,i);
		 }	
		 fclose(fp);
		 return 0;
 }
