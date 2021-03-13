#include<iostream>
using namespace std;
int stack[100],choice;

int top=0;

void push(int n)
{

    if(top==n)
        cout<<"Overflow"<<endl;
    else
    {
        int value;

        cout<<"Enter your value : ";
        cin>>value;
        top++;
        stack[top]=value;
    }
}
void pop()
{
    if(top==0)
        cout<<"Underflow"<<endl;
    else
    {
        --top;
        cout<<"The value is poped successfully"<<endl;
    }
}
void display()
{
    if(top==0)
        cout<<"Stack is empty"<<endl;
    else{
    for(int i=1;i<=top; i++)
        cout<<stack[i]<<' ';
    cout<<endl;
    }
}

int main()
{

    int n;

    cout<<"Enter the size of the stack : ";
    cin>>n;

    while(1)
    {
        cout<<"******** MENU *******"<<endl;
        cout<<"\n 1: push \n 2: pop \n 3: display"<<endl;

        int choice;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            push( n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        }
    }

    return 0;
}
