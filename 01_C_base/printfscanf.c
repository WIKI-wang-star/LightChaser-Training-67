#include <stdio.h>
int main(void)
{
    double a, b;
    char i;
    printf("简易计算器\n");
    printf("格式示例:4.2+5\n");
    printf("请输入表达式：");
    scanf("%lf%c%lf", &a, &i, &b);

    switch (i)
    {
    case '*':
        printf("%f*%f=%f\n", a, b, a * b);
        break;
    case '+':
        printf("%f+%f=%f\n", a, b, a + b);
        break;
    case '-':
        printf("%f-%f=%f\n", a, b, a - b);
        break;
    case '/':
        if (b == 0)
        {
            printf("错误:除数不能为0!\n");
        }
        else
        {
            printf("%f/%f=%f\n", a, b, a / b);
        }
        break;
    default:
        printf("错误：不支持该运算符！\n");
    }
    return 0;
}
