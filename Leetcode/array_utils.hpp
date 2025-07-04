#include <iostream>
using namespace std;
#define endl '\n'
// Template function to print fixed-size array
template <typename T, size_t N>
void printArray(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cout << arr[i];
        if (i < N - 1) cout << " "; // Space between elements
    }
    cout << endl;
}

// Template function to print dynamic array with size
template <typename T>
void printArray(const T* arr, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) cout << " "; // Space between elements
    }
    cout << endl;
}

// Template function to take input for fixed-size array
template <typename T, size_t N>
void inputArray(T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cin >> arr[i];
    }
}

// Template function to take input for dynamic array with size
template <typename T>
void inputArray(T* arr, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}