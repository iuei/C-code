#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int data = 0, times = 0, input = 0, i = 0;
    printf("猜数游戏现在开始!\n"); 
    srand((unsigned int)time(NULL));
    data = rand() % 100 + 1; 
    for(; i < 6; i++){
        printf("请输入第%d次您猜的数:", i+1);
        scanf("%d", &input);
        if(input == data){
            printf("恭喜您猜正确!\n");
            break; 
        } else if(input > data){
            printf("您猜的数过大!\n"); 
        } else{
            printf("您猜的数过小!\n");
        } 
    }
        printf("游戏结束!\n");    
    return 0;     
}
