#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("����һ����������");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum+=i;
printf("sum=%d %d\n",sum,++i);

return 0;
}