#include<iostream>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout<<"enter size of aray ";
    cin>>n;
    cout<<"/n enter array";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int f=0;
    int l=n-1;
    while (f<l)
    {
       int temp=array[f];
       array[f]=array[l];
       array[l]=temp;
       f++;
       --l;
    }
     cout<<"/n the reversed array is:"<<endl;
     for (int i = 0; i < n; i++)
     {
         cout<<" "<<array[i];
     }
return 0;
    
}