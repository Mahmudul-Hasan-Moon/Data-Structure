///infix to postfix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    string q;
    vector<char>p;
    cout<<"Enter infix expression :"<<endl;
    cin>>q;
    st.push('(');
    q.push_back(')');
    int l=q.size();
    for(int i=0; i<l; i++)
    {
        if(q[i]!='+'&&q[i]!='-'&&q[i]!='*'&&q[i]!='/'&&q[i]!='^'&&q[i]!='('&&q[i]!=')')
            p.push_back(q[i]);
        else if(q[i]=='(')
            st.push(q[i]);
        else if(q[i]==')')
        {
            while(st.top()!='(')
            {
                p.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(q[i]=='^')
            {
                while(st.top()=='^')
                {
                    p.push_back(st.top());
                    st.pop();
                }
            }
            else if(q[i]=='/'||q[i]=='*')
            {
                while(st.top()=='^'||st.top()=='/'||st.top()=='*')
                {
                    p.push_back(st.top());
                    st.pop();
                }
            }
            else
            {
                while(st.top()!='(')
                {
                    p.push_back(st.top());
                    st.pop();
                }
            }
            st.push(q[i]);
        }
    }
    vector<char>::iterator it;
    for(it=p.begin();it!=p.end();it++)
        cout<<*it;
    cout<<endl;
    return 0;
}

