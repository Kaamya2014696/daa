 #include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int key, cnt = 0;
        cin >> key;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(arr[i] - arr[j]) == key) {
                    cnt++;
                }
            }
        }
        cout << cnt;
    }
}
