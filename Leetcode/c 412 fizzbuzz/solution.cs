public class Solution {
    public IList<string> FizzBuzz(int n) {
        IList<string> ans = new List<string>();

        for (int i = 1; i <= n; i++) {
            string output = "";

            if (i % 3 == 0) output += "Fizz";
            if (i % 5 == 0) output += "Buzz";

            if (output == "") output = i.ToString();

            ans.Add(output);
        }

        return ans;
    }
}
