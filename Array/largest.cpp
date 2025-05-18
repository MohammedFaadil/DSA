#include <iostream>
using namespace std;

int largest(int n, int arr[]) {
    int res=0;
    for(int i=0; i<=n; i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;

}

int main() {
    int n=5;
    int arr[]={1,2,3,4,5};

    cout<<largest(n, arr)<<endl;


    return 0;
}
