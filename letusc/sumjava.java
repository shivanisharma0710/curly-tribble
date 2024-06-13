import java.util.HashMap;
import java.util.Map;

public class TwoSum 
{
    public int[] twoSum(int[] nums, int target) 
    {
    Map<Integer, Integer> indices = new HashMap<>();
        for (int i = 0; i < nums.length; i++) 
        {
            int complement = target - nums[i];
            if (indices.containsKey(complement)) 
            {
                return new int[] { indices.get(complement), i };
            }
            indices.put(nums[i], i);
        }
        
        return new int[] {};
    }

    public static void main(String[] args) 
    {
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        TwoSum twoSum = new TwoSum();
        int[] result = twoSum.twoSum(nums, target);
        if (result.length == 2) 
        {
            System.out.println(result[0] + " " + result[1]); 
        } 
        else
        {
            System.out.println("No solution found.");
        }
    }
}