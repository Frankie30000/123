#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#define N 100
struct Date
{
    int year;
    int month;
    int day;
};
struct student
{
    char nos[10];
    char name[20];
    char sex[2];
    struct Date date;
    char classes[20];
    char phone[11];
}
stu[N];
static int n;
void input();
void display();
void search();
void add();
void deleted();
void output();
void menu();
void main()
{
    int flag=0;
    menu();
    do
    {
        flag=1;
        switch(getch())
        {
            case '1':
                input();
                break;
            case '2':
                display();
                break;
            case '3':
                search();
                break;
            case '4':
                add();
                break;
            case '5':
                deleted();
                break;
            case '6':
                output();
                break;
            default:
                printf("输入有误");
        }
        printf("按任意键继续\n");
        getch();
        menu();
    }
    while(flag==1);
}
void menu()
{
    system("cls");
    printf("\n");
    printf("\t*******************************\n");
    printf("\t*    欢迎使用学籍管理系统     *\n");
    printf("\t*      1.输入学生数据         *\n");
    printf("\t*      2.显示所有数据         *\n");
    printf("\t*      3.查找学生数据         *\n");
    printf("\t*      4.增加学生数据         *\n");
    printf("\t*      5.删除学生数据         *\n");
    printf("\t*      6.退出程序             *\n");
    printf("\t*******************************\n");
    printf("请选择功能；\n");
}
void input()
{
    int i;
    system("cls");
    printf("输入学生数:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n学号:");
        scanf("%s",&stu[i].nos);
        printf("姓名:");
        scanf("%s",&stu[i].name);
        printf("性别:");
        scanf("%s",&stu[i].sex);
        printf("出生日期 年:");
        scanf("%d",&stu[i].date.year);
        printf("\t 月:");
        scanf("%d",&stu[i].date.month);
        printf("\t 日:");
        scanf("%d",&stu[i].date.day);
        printf("所在班级:");
        scanf("%s",&stu[i].classes);
        printf("联系方式:");
        scanf("%s",&stu[i].phone);

    }
    printf("输入成功\n");
}
void display()
{
    int i;
    system("cls");
    printf("学号\t姓名\t性别\t出生日期\t所在班级\t联系方式\t\n");
    for(i=0; i<n; i++)
    {
        printf("%s",stu[i].nos);
        printf("\t%s",stu[i].name);
        printf("\t%s",stu[i].sex);
        printf("\t%d%d%d",stu[i].date.year,stu[i].date.month,stu[i].date.day);
        printf("\t\t%s",stu[i].classes);
        printf("\t\t%s\n",stu[i].phone);
    }
}
void search()
{
    char a[10];
    int i,j;
    printf("请输入要查询学生的学号\n");
    scanf("%s",a);
    for(i=0; i<n; i++)
    {
        if(strcmp(a,stu[i].nos)==0)
        {
            printf("学号\t姓名\t性别\t出生日期\t所在班级\t联系方式\t\n");
            printf("%s",stu[i].nos);
            printf("\t%s",stu[i].name);
            printf("\t%s",stu[i].sex);
            printf("\t%d%d%d",stu[i].date.year,stu[i].date.month,stu[i].date.day);
            printf("\t\t%s",stu[i].classes);
            printf("\t\t%s",stu[i].phone);
            printf("\n");
            break;
        }
        else
            printf("未找到该学生信息\n");
        break;
    }
}
void add()
{
    int a,i,j;
    system("cls");
    printf("请输入新增加学生人数：\n");
    scanf("%d",&a);
    n=n+a;
    for(i=n-a; i<n; i++)
    {
        printf("\n学号:");
        scanf("%s",stu[i].nos);
        printf("姓名:");
        scanf("%s",stu[i].name);
        printf("性别:");
        scanf("%s",stu[i].sex);
        printf("出生日期 年:");
        scanf("%d",&stu[i].date.year);
        printf("\t 月:");
        scanf("%d",&stu[i].date.month);
        printf("\t 日:");
        scanf("%d",&stu[i].date.day);
        printf("所在班级:");
        scanf("%s",stu[i].classes);
        printf("联系方式:");
        scanf("%s",stu[i].phone);
        printf("添加成功\n");
    }
}
void deleted()
{
    int b=0,i,j,z=0;
    char m,a[100];
    system("cls");
    printf("请输入学号:\n");
    scanf("%s",&a);
    for(i=0; i<n; i++)
    {
        if(strcmp(stu[i].nos,a)==0)
        {
            z=1;
            printf("学号\t姓名\t性别\t出生日期\t所在班级\t联系方式\t\n");
            printf("%s",stu[i].nos);
            printf("\t%s",stu[i].name);
            printf("\t%s",stu[i].sex);
            printf("\t%d%d%d",stu[i].date.year,stu[i].date.month,stu[i].date.day);
            printf("\t\t%s",stu[i].classes);
            printf("\t\t%s",stu[i].phone);
            printf("\n");


            printf("是否确认删除(y/n)\n");
            scanf("%s",&m);
            if(m=='y')
            {
                for(j=b;j<n;j++);
                {
                    stu[b]=stu[b+1];
}
                printf("删除成功\n");
                n--;
            }
            else
                printf("删除失败\n");
        }
            b++;

    }
    if(z==0) printf("未找到该学生信息\n");
}
void output()
{
    system("cls");
    exit(0);
}

