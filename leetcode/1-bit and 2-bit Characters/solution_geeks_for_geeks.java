class Bit_characters {
      
                                                                       // Function to return the count 
                                                                           // of required characters 
    static int countChars(String str, int n) 
    { 
      
        int i = 0, cnt = 0; 
      
                                         // While there are characters left 
        while (i < n) { 
      
                                                 // Single bit character 
            if (str.charAt(i) == '0'   /// charAt is used to check if the given value is present in that position or not if the characterat i is 0 then  increment i . 
                {
                  i += 1;
                }
      
                                                      // Two-bit character 
            else
                {
                  i += 2;                                       //otherwise increment i by 2
                }
                                                                         // Update the count 
            cnt += 1;                                                  //count incremented to 1
        } 
      
        return cnt;                          //returning cnt.
    } 
      
                                                                       // Driver code 
    public static void main (String[] args) 
    { 
        String str = "11010"; 
        int n = str.length(); 
      
        System.out.println(countChars(str, n)); 
    } 
                                                                 // This code is contributed by AnkitRai01
}
