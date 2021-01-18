//Leading element

#include<iostream>
using namespace std;

void Leadingelements(int arr[], int n)
{
    cout<<"\n\nLeaders are : ";
    for(int i=0;i<n; i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
                break;
        }
        if(j==n)
            cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,i;

    cout<<"Enter the size of array : ";
    cin>>n;

    int a[n];

    cout<<"\n\nEnter elements of array : \n";
    for(i=0;i<n;i++)
       cin>>a[i];

    Leadingelements(a, n);

    return 0;
}
