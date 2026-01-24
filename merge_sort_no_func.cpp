#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int curr_size = 1; curr_size < n; curr_size *= 2) {
        
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            
            
            int mid = min(left_start + curr_size - 1, n - 1);
            int right_end = min(left_start + 2 * curr_size - 1, n - 1);

            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;

            vector<int> L(n1), R(n2);

            for (int i = 0; i < n1; i++)
                L[i] = arr[left_start + i];
            for (int j = 0; j < n2; j++)
                R[j] = arr[mid + 1 + j];

            int i = 0; 
            int j = 0; 
            int k = left_start; 

            while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }

            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
