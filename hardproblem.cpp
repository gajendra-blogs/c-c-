#include<bits/stdc++.h>
using namespace std;
bool polindromic(string s)
{
 if (s.length()==1)
 {
     return true;
 }else
 {
     string stemp=s;
     reverse(stemp.begin(),stemp.end());
     if (stemp==s)
     {
         return true;
     }
 }
 
 
}
int main()
{
    string s,s1,s2,s3;
    cin>>s;
    int size=s.length();
    for (int i = 1; i < size-1; i++)
    {
        s1=s.substr(0,i);
        if (polindromic(s1))
        {
             for (int j = 1; j < size-i; j++)
             {
                 s2=s.substr(i,j);
                 s3=s.substr(j+i,size-1);
                 if((polindromic(s2))&&(polindromic(s3)))
                 {
                 cout<<s1<<endl;
                 cout<<s2<<endl;
                 cout<<s3<<endl;
                   return 0;
                 }
             }
             
        }
    }
        
cout<<"not possible";
        
return 0;
    
}