#include<bits/stdc++.h>
using namespace std;
void hanoi(int n,char BEG,char AUX,char END)  ///BEG=Beginning AUX=Auxiliary END= end
{
    if(n>=1){
        hanoi(n-1,BEG,END,AUX);
        cout<<BEG<<" to "<<END<<endl;
        hanoi(n-1,AUX,BEG,END);
    }

}
int main()
{
    int n;
    cout<<"Enter number of Disk :"<<endl;
    cin>>n;
    hanoi(n,'A','B','C');

    return 0;
}

