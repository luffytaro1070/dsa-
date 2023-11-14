#include<iostream>
using namespace std;

int findUnique(int* arr, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int a = findUnique(arr, 6);
    cout << a;
}
