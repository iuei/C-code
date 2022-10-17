#include <stdio.h>
#include <math.h>
int main(){
    int n,i,flag=1;
    printf("请任意输入一个整数,判断其是否为素数:");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            printf("%d不是素数\n",n);
            break;
        }
        if(flag==1){
            printf("%d是素数\n",n);
        }
    }
    return 0;
} 
