#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    int *arr;
    int sum = 0;
    double avg;

    printf("请输入数字个数：");
    scanf("%d", &n);


    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }


    for(int i = 0; i < n; i++)
    {
        printf("请输入第%d个数字:", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (double)sum / n;
    printf("平均值 = %.2lf\n", avg);

    free(arr);      
    arr = NULL;    

    return 0;
}