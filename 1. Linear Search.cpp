///Linear search
#include<iostream>
using namespace std;

int main()
{
    int n,item,loc=0;

    cout<<"Enter the number of element :";
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    cout<<"Enter your search item :";
    cin>>item;

    for(int i=1;i<=n;i++){
            if(item == arr[i])
            loc=i;
    }
    if(loc==0)
        cout<<"Item is not found in the array"<<endl;
    else
        cout<<"Item is found in location "<<loc<<endl;


    return 0;
}

///Input - output

/*Enter the number of element :5
2 4 1 3 7
Enter your search item :3
Item is found in location 4*/
