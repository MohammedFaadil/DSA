#include <iostream>
using namespace std;

int removeDuplicates(int n, int arr[]) {
    if (n == 0) return 0;
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main() {
    int n = 7;
    int arr[] = {3, 3, 9, 9, 10, 11, 15};  // sorted array

    n = removeDuplicates(n, arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
