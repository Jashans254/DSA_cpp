#include <iostream>
#include <cmath>
using namespace std;

class MinHeap {
    int* arr;        // pointer to the array
    int size;        // current number of elements in the heap
    int total_size;  // maximum capacity of the heap

public:
    MinHeap(int n) {
        arr = new int[n];
        size = 0;         // start with an empty heap
        total_size = n;   // maximum capacity
    }

    // inserting a new node
    void insert(int value) {
        if (size == total_size) {
            cout << "Heap overflow" << endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // Step-up heapify
        while (index > 0 && arr[(index - 1) / 2] > arr[index]) {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << value << " is inserted" << endl;
    }

    void Delete() {
        if (size == 0) {
            cout << "Heap underflow" << endl;
            return;
        }

        cout << arr[0] << " is deleted" << endl;
        arr[0] = arr[size - 1];
        size--;
        if (size > 0) {
            Heapify(0);
        }
    }

    void Heapify(int index) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && arr[left] < arr[smallest]) {
            smallest = left;
        }
        if (right < size && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if (smallest != index) {
            swap(arr[smallest], arr[index]);
            Heapify(smallest);
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~MinHeap() {
        delete[] arr;  // release memory
    }
};

int main() {
    MinHeap m(5);
    m.insert(10);
    m.insert(20);
    m.insert(30);
    m.insert(40);
    m.insert(50);
    m.print();
    m.Delete();
    m.print();

    return 0;
}
