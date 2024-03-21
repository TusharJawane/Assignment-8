#include<stdio.h>
void circShift(int* p,int n)
{
    int temp=*(p+(n-1));//last element
    for(int i=2;i>=1;i--)
    {
        *(p+i)=*(p+i-1);
        
    }
    *p=temp;

}
void main()
{
    printf("Enter x,y and z\n");
    int a[3];
    int* ptr=a;
    for(int i=0;i<3;i++)
    {scanf("%d",ptr+i);}
    printf("\n");
    circShift(ptr,3);
    for(int i=0;i<3;i++)
    {printf("%d ",*(ptr+i));}
}