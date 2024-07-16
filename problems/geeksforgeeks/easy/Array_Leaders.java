import java.util.ArrayList;
class Solution {
    // Function to find the leaders in the array.
    static ArrayList<Integer> leaders(int n, int arr[]) {
        // Your code here
        ArrayList<Integer> alist = new ArrayList<Integer>();
        int max = n-1;
        alist.add(arr[max]);
        for(int i = n-2; i >= 0; i--){
            if (arr[i] >= arr[max]){
                max = arr[i];
                alist.add(max);
            }
        }
        return alist;
    }
}

public class Array_Leaders {
    public static void main(String[] args) {
        int arr[] = {16,17,4,3,5,2};
        int arr2[] = {5, 10, 20, 40};
        Solution obj = new Solution();
        ArrayList<Integer> res = obj.leaders(4, arr2); 
        int size = res.size();
        for(int i = size-1; i >= 0; i--){
            System.out.printf("%d ", res.get(i));
        }
        System.out.println();
    }
}
