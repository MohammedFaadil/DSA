#include <iostream>
using namespace std;

int largest(int n, int arr[]) {
    int res = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[res]) {
            res = i;
        }
    }
    return res;
}

int secondLargest(int n, int arr[]) {
    int firstLargest = largest(n, arr);
    int res = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[firstLargest]) {
            if(res == -1 || arr[i] > arr[res]) {
                res = i;
            }
        }
    }
    return res;
}

int main() {
    int n = 5;
    int arr[] = {11, 9, 3, 10, 15};

    int index = secondLargest(n, arr);
    if(index != -1)
        cout << "Second largest element: " << arr[index] << endl;
    else
        cout << "Second largest element not found" << endl;

    return 0;
}
