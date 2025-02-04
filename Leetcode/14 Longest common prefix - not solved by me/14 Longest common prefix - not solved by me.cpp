#include<iostream>
#include<vector>
using namespace std;


string getLongestPrefix (vector<string>& strs){

if(strs.empty()) return "";

string prefix =strs[0];
for(int i=1;i<strs.size();i++){
    int j=0;
    while(j<prefix.size()&& j< strs[i].size()&&strs[i][j]==prefix[j]){
        j++;
    }
    prefix = prefix.substr(0,j);
    if(prefix.empty())break;
}

return prefix;

}
int main(){
  vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << getLongestPrefix(strs) << endl;
    return 0;


}
