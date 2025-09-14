class Solution {
    public boolean isPalindrome(int a) {
        if(a<0){
            return false;
        }
        String aStr = String.valueOf(a);

        for(int i=0; i<aStr.length()/2; i++){
            if(aStr.charAt(i) != aStr.charAt(aStr.length()-1-i)){
                return false;
            }
        }
        return true;
    }
}
