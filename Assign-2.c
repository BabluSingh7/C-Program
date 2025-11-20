#include<stdio.h>
//Q-1 Average of three number
void f1()
{
     int a,b,c;
     printf("Enter three number");
     scanf("%d%d%d",&a,&b,&c);
     printf("Average of %d",(a+b+c)/3);
}
//Q-2 find circumfrence 
void f2()
{
    int r ;
    printf("Enter radius");
    scanf("%d",&r);
    printf("circumfrence is = %f",2*3.14*r);
}
//Q-3 find simple interst
void f3()
{
    int p,r,t;
    printf("Enter P,R,T :");
    scanf("%d%d%d",&p,&r,&t);
    printf("SI is = %d",(p*r*t)/100);
}
int main()
{
    f3();
    return 0;
}