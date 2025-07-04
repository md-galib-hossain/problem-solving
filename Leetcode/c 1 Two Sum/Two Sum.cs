public class Solution2
{
    public int[] TwoSum(int[] nums, int target)
    {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        //4
        //1,2,3,5
        for (int i = 0; i < nums.Length; i++)
        {
            int val = target - nums[i];
            if (dict.ContainsKey(val))
            {
                return new int[] { dict[val], i };
            }
            if (dict.ContainsKey(nums[i]))
            {

                dict[nums[i]] = i;
            }
            else dict.Add(nums[i], i);

        }
        return new int[] { };
    }
}


public class Solution1 {
    public int[] TwoSum(int[] nums, int target) {
 List<int> result = new List<int>();
        for (int i = 0; i < nums.Length - 1; i++)
        {
            for (int j = i + 1; j < nums.Length; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.Add(i);
                    result.Add(j);
                    return result.ToArray();
                }
            }
        }
        return new int[] { };

    }
}