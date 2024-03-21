#include<stdio.h>
#include<string.h>
#include<math.h>
void arrRev(int* ptr,int k)
{
    for(int i=0;i<ceil(k/2);i++)
    {
        int temp= *(ptr+i);
        int b= *(ptr+k-1-i);
        *(ptr+k-1-i)= temp;
        *(ptr+i)= b;
    }
}
void main()
{
    printf("Enter length of array\n");
    int l;
    scanf("%d",&l);
    int n[l];
    printf("Enter elements of array\n");
    for(int i=0;i<l;i++)
    {scanf("%d",(n+i));}
    
    arrRev(n,l);
    for(int i=0;i<l;i++)
    {printf("\n%d",*(n+i));}
}