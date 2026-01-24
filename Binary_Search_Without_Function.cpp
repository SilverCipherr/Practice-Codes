#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (sorted in ascending order):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int foundIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (foundIndex != -1) {
        cout << "Element " << target << " found at index " << foundIndex << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}