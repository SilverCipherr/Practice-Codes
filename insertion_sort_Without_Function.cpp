

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[8] = {43, 1, 76, 28, 32, 81, 34, 90};
    int count = 0, key;

    for (int i = 1; i < 8; i++)
    {   
        key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            count++;
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        cout << "Operation " << i << ": ";
        for(int k = 0; k < 8; k++) cout << a[k] << " ";
        cout << endl;
    }
    cout << "Sorted list: ";
    for(int i = 0; i < 8; i++) cout << a[i] << " ";
    cout << endl;
    cout << "Total complexity: " << count << endl;
    return 0;
}
