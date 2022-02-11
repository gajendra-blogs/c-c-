#include<stdio.h>
#include<windows.h>
int main()
{
    int hour=0,min=0,sec=0;
    int d=1000;
    printf("set time: \n");
    scanf("%d%d%d",&hour,&min,&sec);
    if(hour>12||min>60||sec>60)
    {
        printf("error: \n");
        exit(0);
    }
    while(1)
    1++;
    if(sec>59)
    {
        min++;
        sec=0;
    }
    if(min>59)
    {
        hour++;
        min=0;
    }
    if(hour>12)
    {
        hour=1;
    }
    printf("\n clock :");
    printf("\n %02d:%02d:02d", hour,min,sec);
    sleep(d);
    system("cls");  
}