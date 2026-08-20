#include<stdio.h>
int main()
{
 int n,x,low,high,mid,found=0;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
 scanf("%d",&x);
 low=0;
 high=n-1;

 while(low<=high)
 {
     mid=(low+high)/2;
     if(a[mid]==x)
     {
         printf("Element found at index %d", mid);
         found=1;
         break;
     }
     else if(a[mid]<x)
        low=mid+1;
     else
        high=mid+1;
 }
 if (found==0)
    printf("Element not found");

    return 0;

}
