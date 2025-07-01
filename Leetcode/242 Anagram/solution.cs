public class Solution{

public bool IsAnagram(string s, string t){
int [] cntS = new int[30];
int [] cntT = new int[30];
foreach(char c in s){
cntS[c-'a']++;
}
foreach(char c in t){
cntT[c-'a']++;
}

for(int i=0; i<26; i++){
if(cntS[i]!=cntT[i]) return false;
}
return true;
}

}