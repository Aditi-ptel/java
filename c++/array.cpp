#include <iostream>
using namespace std;
//write a c++ code to find the sum, product and average of elements in an array.

int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
5
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int product = 1;
    double average;

    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    average = static_cast<double>(sum) / n;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;


}