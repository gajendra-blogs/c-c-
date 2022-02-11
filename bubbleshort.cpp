#include<iostream>
using namespace std;
int main()
{
    int n, a[20];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"Enter the unshorted array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    cout<<"after bubble shorting , the array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    
    return 0;
    
}