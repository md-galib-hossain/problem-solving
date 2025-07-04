public class Solution {
    public int MaximumWealth(int[][] accounts) {
        int wealth=0;
        for(int i=0;i<accounts.Length;i++){
int count=0;
for(int j=0;j<accounts[i].Length;j++){
count+=accounts[i][j];
}
wealth=Math.Max(wealth,count);

        }
return wealth;
    }
}