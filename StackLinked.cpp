#include <iostream>
using namespace std;


int main() {
    StackType<int> stack;
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    int item;
    while (!stack.IsEmpty()) {
        stack.Pop(item);
        cout << item << endl;
    }
    StackType<int> stackCopy(stack);
    stackCopy.Push(40);
    while (!stackCopy.IsEmpty()) {
        stackCopy.Pop(item);
        cout << "Copy stack popped: " << item << endl;
    }
    return 0;
}