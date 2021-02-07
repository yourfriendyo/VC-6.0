#include<stdio.h>
int main()
{
int base,exponent;
long result=1;
printf("基数为：");
scanf("%d",&base);
printf("指数为：");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
exponent--;
}
printf("结果为%lld",result);

return 0;
}