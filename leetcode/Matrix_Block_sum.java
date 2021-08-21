
        class Solution {
    public int[][] matrixBlockSum(int[][] mat, int k) {
        int m=mat.length;
        int n=mat[0].length;
        int answer[][]=new int[m][n];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=0;
                for(int r=i-k;r<=i+k;r++){
                    for(int c=j-k;c<=j+k;c++){
                        if(r>=0 && r<m && c>=0 && c<n){
                            answer[i][j]+=mat[r][c];
                        }
                    }
                }
            }
        }
        return answer;
    }
}

/*as per the given input :
 mat = [[1,2,3],[4,5,6],[7,8,9]],
 k=1
 output: [[12,21,16],[27,45,33],[24,39,28]]
 
 condition given: 
 1) i-k <= r <= i + k    (row + the int k) 
 2) j-k <= c <= j+k     (col+ int k )
 (r,c) is a valid position in the matrix 
 
 understanding the first example given :
 1 2 3
 4 5 6
 7 8 9
 
 k=1 for understanding the condition : i-k = 0-1 =-1, i-k=1-1=0, i-k=2-1 = 1          , i+k=0+1=1,i+k=1+1=2,i+k=2+1=3
 */
 
 
