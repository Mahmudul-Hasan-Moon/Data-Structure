#include<bits/stdc++.h>///Selection sort
using namespace std;

int main()
{
    int n,i,j;

    cout<<"Enter number of element :"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the element :"<<endl;
    for(i=1;i<=n;i++)
    cin>>arr[i];

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    cout<<"After sorting the array is :"<<endl;
    for(i=1;i<=n;i++)
    cout<<arr[i]<<" ";

    return 0;
}


