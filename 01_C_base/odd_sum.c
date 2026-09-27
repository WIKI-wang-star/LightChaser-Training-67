#include<stdio.h>
int main(void)
{
    int i;
    int sum=0;
    for(i=1;i<=100;i++){
        if (i%2==1)
        {
            sum=sum+i;
           
        }
        
    }
    printf("1~100的奇数和为%d",sum);
    return 0;
}