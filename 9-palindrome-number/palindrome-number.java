class Solution {
    public boolean isPalindrome(int a) {
        if (a<0){
            return false;
        }
        String num = String.valueOf(a);
        int x = 0, y = num.length() - 1;
        
        while (x<y) {
            if(num.charAt(x)!=num.charAt(y)){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
}