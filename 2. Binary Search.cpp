///Binary search
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,m,h,item;
    cout<<"Enter number of element :";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    cout<<"Enter the element want to find :";
    cin>>item;

        l=0;
        h=n-1;
        m =(l+h)/2;

        while(l<=h){
            if(arr[m]<item)
                l=m+1;
            else if(arr[m]==item){
                cout<<item<<" found at location "<<m+1<<endl;
			    break;
            }
            else
                h=m-1;
            m =(l+h)/2;
        }
        if(l>h)
            cout<<"Not found"<<endl;


    return 0;
}

/// Input- Output

/*Enter number of element :5
2 1 6 4 8
Enter the element want to find :4
4 found at location 3*/
