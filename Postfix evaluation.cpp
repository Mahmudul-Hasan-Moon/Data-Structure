///postfix evaluation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cout<<"Enter postfix expression separate each char by coma: "<<endl;
    cin>>p;

    stack<int>st;

    int l=p.size();
    for(int i=0;i<l;i++)
    {
        if(p[i]!='+'&&p[i]!='-'&&p[i]!='*'&&p[i]!='/'&&p[i]!='^'&&p[i]!=',')
        {
            int j,x=0;
            for(j=i;p[j]!=','&&j<l;j++){
                int z=p[j]-48;
                x=x*10+z;
            }
            i=j-1;
            st.push(x);
        }
        else if(p[i]!=',')
        {
            int x,y;
            x=st.top(),st.pop();
            y=st.top(),st.pop();
            if(p[i]=='+')
                st.push(y+x);
            else if(p[i]=='-')
                st.push(y-x);
            else if(p[i]=='*')
                st.push(y*x);
            else if(p[i]=='/')
                st.push(y/x);
            else{
                double z=pow(y,x);
                st.push(z);
            }
        }

    }
    cout<<st.top()<<endl;
    return 0;
}
