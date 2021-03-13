#include<iostream>
using namespace std;
int main()
{
    int n,k,loc=0,max;
    cin>>n;
    int data[n];
    for(k=1;k<=n;k++)
        cin>>data[k];
    max=data[1];

        for(k=1;k<=n;k++)
        {

        if(max<data[k])
        {
             max=data[k];
            loc=k;
        }
    }
    cout<<loc<<" "<<data[k]<<endl;

    return 0;
}
