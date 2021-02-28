#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("输入一个正整数：");
scanf("%d",&n);
    for(i=2;i<n/2;i++)
	{  if(n%i==0)   {flag=1; break;}  }

if(flag==0)	 printf("%d是素数",n);

else         printf("%d不是素数",n);

return 0;
}