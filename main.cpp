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

// queues with array
int queue[100];
int front = 0; // front of the queue
int rear = 0; // back of the queue

void enqueue(int value) {
    if (rear == 99) {
        return;
    }
    queue[rear] = value;
    rear++;
}

void dequeue() {
    if (front == rear) {
        return;
    }
    front++;
}

void peek() {
    if (front == rear) {
        return;
    }
    return queue[front];
}

// priority queues with array -- its called heap

// binary tree basics
// is a tree where each node has at most 2 children
// left child and right child are the only children of a node
// 10
// /  \
// 5    20
// / \     \
// 3   7     30

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

// its recursive
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// inorder traversal: left, root, right
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->value << " "; // this is the root
    inorder(root->right);
}

// preorder traversal: root, left, right
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->value << " "; // this is the root
    preorder(root->left);
    preorder(root->right);
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