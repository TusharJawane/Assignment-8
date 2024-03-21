#include<stdio.h>
int main()
{
    printf("Enter number of elements in array\n");
    int n;
    scanf("%d",&n);
    int nums[n+1];
    int* p=&nums[0];
    printf("Enter elements of array\n");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<=n;j++)
        {
            int a= *(p+i);
            int b= *(p+j);
            if(a==b)
            {
                printf("%d",*(p+i));
                return 0;
            }
        }
        return 0;
    }
}