#include <stdio.h>

void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[] = {35,12,10,90,34,22,64};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    bubble_sort(arr,n);
    printf("Sorted array: ");

    for(i=0;i<n;i++)
   {
    printf(" %d",arr[i]);
   }
    printf("\n");
    return 0;

}
