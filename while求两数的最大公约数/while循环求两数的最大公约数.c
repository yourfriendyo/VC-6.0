#include<stdio.h>
int main()
{
int n1,n2;
printf("输入两个数：");
scanf("%d %d",&n1,&n2);
while(n1!=n2)
{
if(n1>n2) n1=n2-n1;
else n2=n1-n2;
}
printf("gcd=%d",n1);
return 0;
}
