#include "stdio.h"
#define N 3
int main()
{
  int number[N]; 
  int i,max;
  int m;
  char name[10];
  printf("输入学生成绩和学号:\n");
  for(i=0;i<N;i++,m++)
  {
  	m=1;
  	scanf("%s  %d",&name,&number[i]);
  	printf("%d位同学的成绩和学号:\n",m);
  
  	printf("\n");
  } 	m++;
  max=number[0];
  for(i=1;i<N;i++)
  {
  	if(max<number[i])
  	{
  		max=number[i];
  	}
  }
  printf("成绩最高学生为 %s",max,name);
  
}

