#include<stdio.h>
int p1main()
{
    printf("Hello");
}
//Q-2
int p2main()
{
    printf("Hello\nStudent");
}
//Q-3
int p3main()
{
    printf("\"MySirG\"");
}
//Q-4,Q-5
int p4main()
{
    printf("\\n");
    printf("\\r");
}
//Q-6
int p6main()
{
    printf("\"Teacher's Day\"");
}
//Q-7
int p7main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Sum is = %d",a+b);
    return 0;
}
//Q-8
int p8main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Square is %d",n*n);
    return 0;

}
//Q-9
int p9main()
{
    int l,b;
    printf("Enter length and wridth");
    scanf("%d%d",&l,&b);
    printf("Area of Rectangle %d",l*b);
    return 0;
}
//Q-10
int main()
{
    int r;
    printf("Enter radius ");
    scanf("%d",&r);
    printf("Area of circle %f",3.14*r*r);
}
