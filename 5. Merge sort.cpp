#include<bits/stdc++.h>
using namespace std;

void merge(int *L,int mid,int *R,int n,int *arr)
{
    int k=0,l=0,r=0;
    while(l<mid && r<n){
        if(L[l]<R[r]){
            arr[k]=L[l]; l++; k++;
        }
        else{
            arr[k]=R[r]; r++; k++;
        }
    }
    while(l<mid){ arr[k]=L[l]; k++; l++;}
    while(r<n){ arr[k]=R[r]; k++; r++;}
}

void mergesort(int *arr,int n)
{
    int mid,j,L[100],R[100];
    if(n<2) return;
    mid=n/2;

    for(j=0;j<mid;j++) L[j]=arr[j];
    for(j=mid;j<n;j++) R[j-mid]=arr[j];

    mergesort(L,mid);
    mergesort(R,n-mid);
    merge(L,mid,R,n-mid,arr);
}
int main()
{
    int arr[100],n,i;

    cout<<"Enter The Number Of Elements : "<<endl;
    cin>>n;

    cout<<"Enter the element :"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];

    mergesort(arr,n);

    cout<<"After sorting :"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
