#include <iostream>
using namespace std;



int insert(int n, int arr[], int x, int cap, int pos) {
    if (n == cap) {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  // Define capacity as 10
    int n = 5;                      // Current number of elements
    int x = 7;
    int cap = 10;
    int pos = 5;

    n = insert(n, arr, x, cap, pos);

    // Display the updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
