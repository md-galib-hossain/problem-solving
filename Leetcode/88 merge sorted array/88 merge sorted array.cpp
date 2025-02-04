#include<iostream>
#include<vector>
using namespace std;


int main (){
 vector<int> nums1={1,2,3,0,0,0};
  vector<int> nums2={2,5,6};
int m=3,n=3;
 int lastIndex=m+n-1;
 int i = m-1;
 int j = n-1;
 while(i>=0 && j>=0){
    if(nums1[i]>=nums2[j]){
        nums1[lastIndex]=nums1[i];
        i--;
         lastIndex--;
    }else{
    nums1[lastIndex]= nums2[j];
    j--;
     lastIndex--;
    }

 }
 while(j>=0){
  nums1[lastIndex]= nums2[j];
    j--;
     lastIndex--;
 }
  for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
    }



return 0;
}
