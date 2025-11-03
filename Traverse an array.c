#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare array of size n

    // Taking input for array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying (traversing) the array elements
    cout << "The array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << " = " << arr[i] << endl;
    }

    return 0;
}
