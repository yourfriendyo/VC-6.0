#include<stdio.h>
int main()
{
int base,exponent;
long result=1;
printf("����Ϊ��");
scanf("%d",&base);
printf("ָ��Ϊ��");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
exponent--;
}
printf("���Ϊ%lld",result);

return 0;
}