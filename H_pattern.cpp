#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;

    cout<<"Enter your input for H-pattern : ";
    cin>>n;

    cout<<"\nThe result for pattern is :\n\n\t";
    for(i=1;i<=n;i++)
      {
        for(j=1;j<=i;j++)
           cout<<" *";
        for(k=2*n-1;k>=2*i;k--)
           cout<<"  ";
        for(j=1;j<=i;j++)
           cout<<" *";
        cout<<"\n\t";
      }

    for(i=1;i<=n;i++)
      {
        for(j=n;j>=i;j--)
          cout<<" *";
        for(k=3;k<=2*i;k++)
          cout<<"  ";
        for(j=n;j>=i;j--)
          cout<<" *";
        cout<<"\n\t";
      }

    return 0;
}
