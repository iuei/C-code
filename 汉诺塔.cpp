#include<stdio.h>
 void move(int n,char a,char b,char c)
 {
 	if(n==1)
 	printf("\t%c->%c\n",a,c);
 	else
 	{
 		move(n-1,a,b,c);
		 printf("\t%c->\n",a,c);
		 move(n-1,b,a,c); 
	 }
  } 
  
  main()
  {
  	int n;
  	printf("请输入要移动的块数:");
  	scanf("%d",&n);
  	move(n,'a','b','c');
  }
