#include <stdio.h>
int main()
{
int n,i;
unsigned long  factorial=1;
printf("����һ��������");
scanf("%d",&n);

if(n<0)
printf("fuck!����û�н׳�");

else
{
   for(i=1;i<=n;i++)
   {
   factorial*=i;
   }
printf("%d!=%llu",n,factorial);
}

return 0;
}