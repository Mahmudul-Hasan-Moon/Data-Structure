#include<iostream>
using namespace std;
int queue[100],choice;

int front=0,rear=0;

void push(int n)
{

    if(rear==n)
        cout<<"Overflow"<<endl;
    else
    {
        int value;

        cout<<"Enter your value : ";
        cin>>value;
        queue[rear]=value;
        rear++;
    }
}
void pop()
{
    if(front==rear)
        cout<<"Underflow"<<endl;
    else
    {
        front++;
        cout<<"The value is poped successfully"<<endl;
    }
}
void display()
{
    if(front==rear)
        cout<<"Stack is empty"<<endl;
    else{
    for(int i=front;i<rear; i++)
        cout<<queue[i]<<' ';
    cout<<endl;
    }
}

int main()
{

    int n;

    cout<<"Enter the size of the queue : ";
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
