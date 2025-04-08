#include <iostream>
using namespace std;
//write a c++ code to find the maximum and minimum elements in an array.

void findMaxMin(int arr[], int size, int &max, int &min) {
    max = arr[0]; // Initialize max to the first element
    min = arr[0]; // Initialize min to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max, min;
    
    findMaxMin(arr, size, max, min);

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;


}