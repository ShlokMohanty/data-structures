//its a leetcode solution therefore have ignored taking the input just had applied the logic for the code
class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
//we want to find the elementg which is the smallest and is greater than the target
        int start = 0;
        int end = letters.length-1;
     
        while(start<=end)
        {
             int mid = (start + (end - start))/2;
            if(target < letters[mid])
            {
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }
           
        }
        return letters[start % letters.length];
    }
}

//here what we were doing was we were tsearcing the element which is the smallest in the array but greater that the tatrget element we want to find out 
//so as the array was sorted we used binary search which is optimizd over linear search and then what we did is 
//we just return the element gretaer than the target element 
//as we can see while iterating over the array we end up when start = end+1;
//and hence as a result we returned the 21st line we used the modulo because as in the question it was mentioned 
// there is wrapping around of letters .
