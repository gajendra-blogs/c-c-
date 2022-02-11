#include<iostream>
using namespace std;
int main(){
    int n;
    int A[10][10];
    
    cout<<"enter size of square matrix:"<<endl;
    cin>>n;
    cout<<"enter the matrix:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin>>A[i][j];  
    }
//    to print the matrix
    cout<<"the matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {for(int k=0;k<n;k++)
       {cout<<" "<<A[i][k];
	   }
	   cout<<endl;
	}
    // to find transpose of matrix
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            int temp=A[j][i];
            A[j][i]=A[i][j];
            A[i][j]=temp;
        }
        
    }
    cout<<"the transpose of the matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<"\n";
        
    }
    // matrix after rotate 90 dig 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            int temp=A[i][j];
            A[i][j]=A[i][n-j-1];
            A[i][n-j-1]=temp;
        }
        
    }
    cout<<" matrix after 90 dig rotation clockwise"<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<"\n";
    }
    // maximum element in each column
     cout<<" maximum no. in each row"<<endl;
    for (int i = 0; i < n; i++)
    {
      int max=0;
      for (int j = 0; j < n; j++)
      { 
          if (A[i][j]>max)
           max=A[i][j];
           
      }
        
        cout<<max<<endl;
        
        
    }
    
    

    
    
   return 0; 
}
