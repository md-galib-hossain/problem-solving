public class Solution {
    public int DiagonalSum(int[][] mat) {
        int n = mat.Length;
        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            totalSum += mat[i][i];

            
            if (i != n - 1 - i) { 
                totalSum += mat[i][n - 1 - i];
            }
        }
        
        return totalSum;
    }
}