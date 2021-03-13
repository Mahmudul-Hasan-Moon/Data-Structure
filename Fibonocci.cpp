///Fibonocci
#include<iostream>
using namespace std;

int fibonocci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(fibonocci(n-2)+fibonocci(n-1));
}

int main()
{
    int n;

    cout<<"Enter a number :";
    cin>>n;

    int fib = fibonocci(n);

    cout<<fib<<endl;

    return 0;
}

