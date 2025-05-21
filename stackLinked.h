#include <iostream>
using namespace std;

template <class T>
struct NodeType {
    ItemType info;
    NodeType<T>* next;
};
template <class T>
class stackLinked {
private:
    NodeType<T>* topPtr;

public:
    stackLinked();
    void MakeEmpty();
    StackLinked(const StackLinked <T> & anotherStack);
    bool IsFull() const;
    bool IsEmpty() const;
    void push(T Item);
    void pop(T& item);
};

template <class T>
stackArray<T>::stackArray() {
    topPtr = nullptr;
}

template <class T>
stackArray<T>::StackLinked(const StackLinked <T> & anotherStack);{
    if (anotherStack.topPtr == nulptr) {
        topPtr = nullptr;
    }
    else {
        topPtr = new NodeType<T>;
        topPtr->info = anotherStack.topPtr->next;

        NodeType<T>* ptr1 = anotherStack.topPtr->next;
        NOdeType<T>* ptr2 = topPtr;

        while (ptr1 != nullptr) {
            ptr2->next = new NodeType<T>;
            ptr2 = ptr2->next;
            ptr2->info = ptr1->info;
            ptr1 = ptr1->next;
        }
        ptr2->next = nullptr;
    }
}

template <class T>
void stackArray<T>::MakeEmpty() {
    NodeType<T>* tempPtr;
    while (topPtr != nullptr) {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class T>
bool stackArray<T>::IsEmpty() const {
    return (topPtr == nullptr);
}

template <class T>
bool stackArray<T>::IsFull() const {
    NodeType<T>* location = new NodeType<T>;
    if (location == nullptr)
        return true;
    else {
        delete location;
        return false;
    }

}

template <class T>
void stackArray<T>::push(T newItem) {
    NodeType<T>* location;
    location = new NodeType<T>;
    location->info = item;
    location->next = topPtr;
    topPtr = loc
}

template <class T>
void stackArray<T>::pop(T& item) {
    NodeType<T>* tempPtr;
    item = topPtr->info;
    tempPtr = topPtr;
    topPtr = topPtr->next;
    delete tempPtr;
}