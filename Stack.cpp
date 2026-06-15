#include<iostream>
using namespace std;
class Stack{
    private:
        int size;
        int *arr;
        int top;
    public:
        Stack(int s){
            int size = s;//size of stack
            arr=new int[size];
            int top =-1;
        }
        //This checks the function is empty or not
        bool isEmpty(){
            return top==-1;
        }
        //This checks the function is full or not
        bool isFull(){
            return top==size -1;
        }
        //This function 
        void push(int value){
            if(isFull()){
                cout<<"Stack is full"<<endl;
                return ;
            }
            arr[++top]=value;
            cout<<"Element pushed ="<<arr[top]<<endl;
        }
        void displayStack(){
            if(isEmpty()){
                cout<<"stack is empty"<<endl;  
            }
            for(int i=top;i>0;i--){
                cout<<"["<<arr[i]<<"]"<<endl;
            }
        }
};
int main(){
    Stack st(5);
    cout<<"Stack has created with capacity of 5"<<endl;
    while(true){
        int ch;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display Stack"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        if (ch==1){
            int val;
            cout<<"Enter the value to push in the stack"<<endl;
            cin>>val;
            st.push(val);
        }
        //else if(ch==2){
          //  st.pop();
        //}
        else if(ch ==3){
            st.displayStack();
        }
        //else if(ch ==4){
          //  st.peek();
        //}
        else if(ch==5){
            cout<<"Exiting program"<<endl;
            break;
        }
    }
    return 0;
}

