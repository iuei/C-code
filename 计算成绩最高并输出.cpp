#include "stdio.h"
#define N 3
int main()
{
  int number[N]; 
  int i,max;
  int m;
  char name[10];
  printf("����ѧ���ɼ���ѧ��:\n");
  for(i=0;i<N;i++,m++)
  {
  	m=1;
  	scanf("%s  %d",&name,&number[i]);
  	printf("%dλͬѧ�ĳɼ���ѧ��:\n",m);
  
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
  printf("�ɼ����ѧ��Ϊ %s",max,name);
  
}

