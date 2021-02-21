#include<stdio.h>
int main()
{
int f1,f2,i,flag;
printf("输入两个整数：");
scanf("%d%d",&f1,&f2);
printf("%d与%d之间的素数为：",f1,f2);
while(f1<f2)
{
flag=0;
  for(i=2;i<=f1/2;i++)
  {
    if(f1%i==0) {flag=1;  break;}
  }
  if(flag==0) printf("%d\t",f1);
  f1++;
}
printf("\n");
return 0;
}