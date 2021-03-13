///Bauble sort
#include<iostream>
using namespace std;

int main()
{
    int n,temp;

    cout<<"Enter number of element :";
    cin>>n;

    int arr[n];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
