///Factorial
#include<iostream>
using namespace std;

long int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return(n*factorial(n-1));
}

int main()
{
    int n;

    cout<<"Enter a number :";
    cin>>n;

    long int fac = factorial(n);

    cout<<fac<<endl;

    return 0;
}
