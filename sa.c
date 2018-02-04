#include <stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("swapping two numbres a and b to swap/n");
scanf("%d%d",&a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("a=%d b=%d",a,b);
return 0;
}
