#include <iostream>
using namespace std;

int deleteElement(int n, int arr[], int x) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            break;
        }
    }
    if(i == n) {
        return n;
    }

    for(int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3;
    n = deleteElement(n, arr, x);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
