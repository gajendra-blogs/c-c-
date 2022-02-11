#include<stdio.h>
int main()
{
    int a[5]={0};
    int n=0,i=0,counteven=0,countodd=0;
    printf("enter number of element less then 5");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            counteven+=1;
        }
        else
        {
            countodd+=1;
        }
        
    }
    printf("even%d odd %d",counteven,countodd);
    return 0;}