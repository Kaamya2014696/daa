#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i];
        int j, key, cmp = 0, shifts = 0;
        for (int i = 1; i < n; ++i) {
            key = arr[i];
            j = i - 1;
            cmp++;
            while (j >= 0 && arr[j] > key) {
                if (arr[j] > key) cmp++;
                shifts++;
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        for (int i = 0; i < n; ++i) cout << arr[i] << " ";
        cout << "\nComparisons = " << shifts;
        cout << "\nShifts = " << cmp;
        cout << endl;
    }
    return 0;
}
