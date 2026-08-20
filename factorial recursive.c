#include<stdio.h>
int fact(int n)
{
  if(n<=1)
    return 1;
  return n*fact(n-1);
}
int main()
{

int n,result;
scanf("%d",&n);
result=fact(n);
printf("%d",result);
return 0;

}
