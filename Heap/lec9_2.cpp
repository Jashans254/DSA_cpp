#include <iostream>
#include <cmath>
using namespace std;

class MaxHeap {
    int* arr;         // Pointer to the array
    int size;         // Current number of elements in the heap
    int total_size;   // Maximum capacity of the heap

public:
    MaxHeap(int n) {
        arr = new int[n];  // Allocate memory dynamically
        size = 0;          // Start with an empty heap
        total_size = n;    // Set the maximum capacity
    }

    // Insert a new node
    void insert(int value) {
        if (size == total_size) {
            cout << "Heap overflow" << endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // Step-up heapify for MaxHeap
        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << value << " is inserted" << endl;
    }

    // Delete the root node
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

    // Heapify function to maintain max-heap property
    void Heapify(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        // Compare with the left child
        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        // Compare with the right child
        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }

        // If the largest element is not the parent, swap and heapify
        if (largest != index) {
            swap(arr[largest], arr[index]);
            Heapify(largest);
        }
    }

    // Print the elements of the heap
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to release memory
    ~MaxHeap() {
        delete[] arr;
    }
};

int main() {
    MaxHeap m(5);
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
