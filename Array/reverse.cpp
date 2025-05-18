#include <iostream>
using namespace std;

void reverse(int n, int arr[]) {
    int low = 0, high = n - 1;
    while (low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main() {
    int n = 5;
    int arr[] = {11, 9, 3, 10, 15};

    reverse(n, arr);

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
