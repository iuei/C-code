#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int data = 0, times = 0, input = 0, i = 0;
    printf("������Ϸ���ڿ�ʼ!\n"); 
    srand((unsigned int)time(NULL));
    data = rand() % 100 + 1; 
    for(; i < 6; i++){
        printf("�������%d�����µ���:", i+1);
        scanf("%d", &input);
        if(input == data){
            printf("��ϲ������ȷ!\n");
            break; 
        } else if(input > data){
            printf("���µ�������!\n"); 
        } else{
            printf("���µ�����С!\n");
        } 
    }
        printf("��Ϸ����!\n");    
    return 0;     
}
