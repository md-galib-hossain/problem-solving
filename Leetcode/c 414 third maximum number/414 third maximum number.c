#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> nums= {3,2,1};
int maxIndex= INT_MIN ;

for(int i=0; i<nums.size();i++){
    if(nums[i]>maxIndex){
        maxIndex=i;
    }

}




return 0;
}
