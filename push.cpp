#include <iostream>
#define max 4
using namespace std;
int top = -1, item,stack[max];
char ch;

void push(int);
void pop();
void display();

int main()
{
    do
    {
        /* code */
        int choice;
        cout << "enter 1: to push,2: for pop, 3: for display  :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter element to push : ";
            cin >> item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            cout << "sorry wrong key";
        }
        cout<<"are you want to push ,pop, display \n enter 'y' for yes and 'n' for no"<<endl;
        cin>>ch;

    } while (ch=='y'||ch=='n');
    return 1;
}
void push(int n)
{
           if(top==max-1)
           {
            cout<<"overflow stack is full";
            exit(0);
           }
           else{
           top++;
           stack[top]=item;
           cout<<stack[top]<<"is pushed on stack"<<endl;
           }
           
}
void pop()
{
           if(top ==-1)
           {
            cout<<"stack is already empty";
            exit (0);
           }
           cout<<stack[top]<<"is poped from stack whose index number is "<<top+1<<endl;
           top--;
}
void display()
{
           if(top==-1)
           {
            cout<<"stack is empty";
            exit(0);
           }
           for(int i=top;i>=0;i--)
           {
            cout<<"stack ["<<i<<"] = "<<stack[i]<<endl;
           }
            
}
