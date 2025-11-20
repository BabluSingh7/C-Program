#include<stdio.h>
//Q-1 Average of three number
void f1()
{
     int a,b,c;
     printf("Enter three number");
     scanf("%d%d%d",&a,&b,&c);
     printf("Average of %d",(a+b+c)/3);
}

int main()
{
    f1();
    return 0;
}