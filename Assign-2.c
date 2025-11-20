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
//Q-4 volume cuboid
void f4()
{
    int l,w,h;
    printf("Enter length, width, and height. ");
    scanf("%d%d%d",&l,&w,&h);
    printf("Volume of cubiod %d",l*w*h);

}
//Q-5
void f5()
{
    float cp,sp,p;
    printf("Input cost price of 12 Bananas");
    scanf("%f",&cp);
    printf("Input Selling Price of 12 Bananas");
    scanf("%f",&sp);
    printf("Profit or Loss is %f",(sp-cp)/12*25);
    
}
int main()
{
    f3();
    return 0;
}