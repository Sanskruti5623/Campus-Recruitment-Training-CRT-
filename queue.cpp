#include<iostream>
using namespace std;
class Queue {
  private:
    int *arr;
    int front, rear, capacity;

  public:
    Queue(int size) {
      capacity = size;
      arr= new int[capacity];
      front = 0;
      rear = -1;
    }
    bool isEmpty() {
      return rear < front;
    }
    bool isFull() {
      return rear == capacity - 1;
    }
    void Enqueue(int value) {
      if(isFull()) {
        cout<<"Queue is Full"<<value<<endl;
        return;
      }
      arr[++rear] = value;
      cout<<value<<"Inserted into Queue = "<<value<<endl;
    }
    void display() {
      if(isEmpty()) {
        cout<<"Queue is Empty."<<endl;
        return;
      }
      for(int i = front; i <= rear; i++) {
        cout<<"[ "<<arr[i]<<" ]" <<" ";
      }
    }
    void Dequeue() {
      if(isEmpty()) {
        cout<<"Queue is Empty."<<endl;
        return;
      }
      cout << "Element popped =" << arr[front] <<endl;
      front++;
    }
    void peek() {
        if(isEmpty()){
            cout<<"Q is Empty"<<endl;
            return;
        }
        cout<<"Top element ="<<"[ "<<arr[front]<<" ]" <<endl;
    }
};
int main() {
  Queue obj(5);
  int ch;
    cout <<"Queue has been created with capacity 5" <<endl;
    while (true) {
      cout << "\n1. Enqueue" << endl;
      cout << "2. Dequeue" << endl;
      cout << "3. Display Queue" << endl;
      cout << "4. Peek" << endl;
      cout << "5. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> ch;
      if (ch == 1) {
        int val;
        cout << "Enter value to be pushed: ";
        cin >> val;
        obj.Enqueue(val);
      }
      else if (ch == 2) {
        obj.Dequeue();
      }
      else if (ch == 3) {
        obj.display();
      }
      else if (ch == 4) {
        obj.peek();
      }
      else if (ch == 5) {
        cout << "Exiting program..." << endl;
        break;
      }
      else {
        cout << "Invalid choice!" << endl;
      }
    } 
  return 0;
}