#include <bits/stdc++.h>
#define endl '\n'
#include "../array_utils.hpp"
using namespace std;

void leftRotate()

{
  //O(n) time
    //O(n) space
int n,k;cin>>n>>k;
int arr[n];
inputArray(arr,n);
//1,2,3,4,5
k=k%n;
int ans[n];
for(int i=0;i<n;i++){
int realIndex=(i+n-k)%n;
ans[realIndex]=arr[i];

}


printArray(ans,n);
}

void rightRotate()

{
//O(n) time
    //O(n) space
int n,k;cin>>n>>k;
int arr[n];
inputArray(arr,n);
//1,2,3,4,5
int ans[n];
for(int i=0;i<n;i++){
int realIndex=(i+k)%n;
ans[realIndex]=arr[i];

}


printArray(ans,n);
}



void reverse(int i,int j,int a[]){
while(i<j){
    swap(a[i],a[j]);
    i++;
    j--;
}
}

void optimizedLeftRotate(){
      //O(n) time
    //O(1) space
    int n,k;cin>>n>>k;
int arr[n];
inputArray(arr,n);
//1,2,3,4,5
k=k%n;
reverse(0,k-1,arr);
reverse(k,n-1,arr);
reverse(0,n-1,arr);
printArray(arr,n);
}

void optimizedRightRotate(){
    //O(n) time
    //O(1) space
    int n,k;cin>>n>>k;
int arr[n];
inputArray(arr,n);
//1,2,3,4,5
k=k%n;
reverse(0,n-1,arr);
reverse(0,k-1,arr);
reverse(k,n-1,arr);
printArray(arr,n);
}
int main()
{

    optimizedRightRotate();
    return 0;
}



