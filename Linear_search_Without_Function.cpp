#include <iostream>
using namespace std;

int main() {
    int n, target, i;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    bool found = false;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element " << target << " found at index " << i << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
