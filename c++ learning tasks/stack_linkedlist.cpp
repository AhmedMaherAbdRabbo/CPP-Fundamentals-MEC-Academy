#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Linkedlist() {
        head = NULL;
    }

    void insertNode_begin(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insert_at(int idx, int data) {
        if (idx < 0 || idx > getLenght_iterative()) return;
        if (idx == 0) {
            insertNode_begin(data);
            return;
        }
        Node* temp = head;
        for (int i = 1; i < idx; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteNode_begin() {
        if (head == NULL) return;
        Node* itr = head;
        head = head->next;
        delete itr;
    }

    void deletebyindex(int idx) {
        if (idx < 0 || idx >= getLenght_iterative()) return;
        if (idx == 0) {
            deleteNode_begin();
            return;
        }
        Node* prev = head;
        for (int i = 1; i < idx; i++) {
            prev = prev->next;
        }
        Node* cur = prev->next;
        prev->next = cur->next;
        delete cur;
    }

    int getLenght_iterative() {
        Node* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void printList() {
        Node* temp = head;
        if (head == NULL) {
            cout << "List Empty !!" << endl;
            return;
        }
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Linkedlist() {
        Node* cur = head;
        while (cur != NULL) {
            Node* temp = cur;
            cur = cur->next;
            delete temp;
        }
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void print() {
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    s.pop();
    cout << "After pop: ";
    s.print();
    return 0;
}
