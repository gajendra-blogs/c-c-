#include  <iostream>
using namespace std;
int main(){ int n,m;
           int A[n][m];
         cout<<"enter order of matrix (row & column)"<<endl;
         cin>>n>>m;
          cout<<"enter matrix elements"<<endl;
          for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)  
                cin>>A[i][j];
          cout<<"your matrix is "<<endl;
          for (int i = 0; i < n; i++)
          { cout<<endl<<"[ ";
              for (int j = 0; i < m; j++)
              {
                  cout<<" "<<A[i][j];
              }
              cout<<" ]";
          }
          
          
    return 0;

}