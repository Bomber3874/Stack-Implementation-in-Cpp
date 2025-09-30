/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
using namespace std;
const int SIZE = 5;
void push(int arr[], int &top, int value) {
    if(top == SIZE - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = value;
        cout << "Pushed: " << value << endl;
    }
}
void pop(int arr[], int &top) {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped: " << arr[top] << endl;
        top--;
    }
}
int main() {
    int arr[SIZE];
    int top = -1;
    for(int i = 1; i <= 6; i++) {
        push(arr, top, i * 10);
    }
    for(int i = 1; i <= 6; i++) {
        pop(arr, top);}
    cout<<"The array is : ";
    for(int i=0;i<SIZE;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
output:
Pushed: 10
Pushed: 20
Pushed: 30
Pushed: 40
Pushed: 50
Stack Overflow
Popped: 50
Popped: 40
Popped: 30
Popped: 20
Popped: 10
Stack Underflow
The array is : 10 20 30 40 50
*/