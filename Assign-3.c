#include<stdio.h>
//Q-1
void f1()
{
    char x;
    printf("Enter Character:");
    scanf("%c",&x);
    printf("ASCII code is %d",x);
}
//Q-2
void f2()
{
    int a;
    printf("Enter ASCII code ");
    scanf("%d",&a);
    printf("Character is %c",a);
}
//Q-3
void f3()
{
    char a,b,c;
    printf("Enter three Character :");
    scanf("%c%c%c",&a,&b,&c);
    printf("%c-%d\n%c-%d\n%c-%d",a,a,b,b,c,c);

}
//Q-4
void f4()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("print last digit %d",n%10);
}
//Q-5
void f5()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("print without last digit %d",n/10);
}
int main()
{
    f5();
    return 0;
}