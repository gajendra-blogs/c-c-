#include<iostream>
using namespace std;
 int main()
 {
     long array[10];
     int i,fof;
     cout<<"enter the number";
     for (int i = 0; i < 10; i++)
     {
         cin>>array[i];
     }
     cout<<"enter the digit that you want to search"<<endl;
     cin>>fof;
     int count=0;
     for(i=0;i<10;i++)
     {
         if (array[i]==fof)
         {
             count++;
         }
         
     }
     cout<<"friquecy is "<<count;
     return 0;

 }