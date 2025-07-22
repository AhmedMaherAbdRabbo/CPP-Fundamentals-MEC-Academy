#include <iostream>

using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (!isFull())
            arr[++top] = value;
    }

    int getElement(int index) {
        if (index >= 0 && index <= top)
            return arr[index];
        return -1;
    }

    int getSize() {
        return top + 1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int check(int arr[], int size, int k) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == k)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number to check : ";
    cin >> k;

    int index = check(arr, n, k);

    if (index == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << index << endl;

    delete[] arr;
    return 0;
}

