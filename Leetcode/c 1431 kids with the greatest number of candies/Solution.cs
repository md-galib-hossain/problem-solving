public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        IList<bool> result = new List<bool>();
int n= candies.Length;
for(int i=0;i<n;i++){
    int current=candies[i]+extraCandies;
bool isGreatest=true;
foreach(int candy in candies){
if(candy>current) {
    isGreatest=false;
    break;
}

}
result.Add(isGreatest);

}
return result;
    }
}

public class OptimizedSolution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        IList<bool> result = new List<bool>();
        
        // Step 1: Find the current max candies any kid has
        int maxCandies = 0;
        foreach (int candy in candies) {
            if (candy > maxCandies) {
                maxCandies = candy;
            }
        }

        // Step 2: Check each kid's potential candy count
        foreach (int candy in candies) {
            result.Add(candy + extraCandies >= maxCandies);
        }

        return result;
    }
}