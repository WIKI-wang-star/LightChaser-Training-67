#include<stdio.h>
typedef struct Student
{
    char name[20];
    float score;
}Stu;

int main (void)
{
    Stu stu;
    printf("请输入学生姓名：");
    scanf("%s", stu.name);
    printf("请输入分数：");
    scanf("%f", &stu.score);
    printf("\n成绩单\n");
    printf("姓名：%s\n", stu.name);
    printf("分数：%.2f\n", stu.score);

    return 0;
}