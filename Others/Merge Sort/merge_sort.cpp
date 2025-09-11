#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void Merge(vector<int> &arr,int l,int mid,int r ){
    vector<int> temp(r - l + 1);
    int i = l, j = mid + 1, k = 0;

    while (i <= mid && j <= r) {
        if (arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (i = l, k = 0; i <= r; i++, k++) arr[i] = temp[k];
}

void MergeSort(vector<int> &arr, int l, int r) { 
    if (l == r) return;

    int mid = (l + r) / 2;

    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    Merge(arr, l, mid, r);
}

int main() {
    vector<int> arr = {1, 3, 2, 5, 7, 9, 8};
    int l = 0, r = arr.size() - 1;
    MergeSort(arr, l, r);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
