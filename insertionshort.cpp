#include<iostream>
using namespace std;
int main()
{
    int n,a[10];
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the unshorted array"<<endl;  
    for(int i=0;i<n;i++)
     cin>>a[i];
     for (int i = 1; i < n; i++)
     {
       int count=0;
       while (count<i)
       {
           if(a[count]>a[i])
           {
               int temp=a[count];
               a[count]=a[i];
               a[i]=temp;
           }
           count++;
       }
       
     }
     
    cout<<"after insertion shorting, the array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}