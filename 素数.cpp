#include <stdio.h>
#include <math.h>
int main(){
    int n,i,flag=1;
    printf("����������һ������,�ж����Ƿ�Ϊ����:");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            printf("%d��������\n",n);
            break;
        }
        if(flag==1){
            printf("%d������\n",n);
        }
    }
    return 0;
} 
