#include <iostream>
using namespace std;

// linked lists
struct Node {
    int value;
    Node* next; // pointer to the next node
};

// define head & tail
Node* head = nullptr;
Node* tail = nullptr;

void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    head = newNode;
    if (tail == nullptr) {
        tail = newNode;
    }
}

void insertAtTheEnd(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleteFromBeginning() {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void reverseLinkedList() {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// stacks with array
int stack[100];

int top = -1; // indicates stack is empty

void push(int value) {
    if (top == 99) {
        return;
    }
    top++;
    stack[top] = value;
}

void pop() {
    if (top == -1) {
        return;
    }
    top--;
}

void peek() {
    if (top == -1) {
        return;
    }
    return stack[top];
}

// random functions
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}   