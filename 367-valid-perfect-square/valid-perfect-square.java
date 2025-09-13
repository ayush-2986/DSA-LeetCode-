class Solution {
    public boolean isPerfectSquare(int num) {
        double sqrt = Math.sqrt(num);

        if (sqrt == ((int)sqrt)){
            return true;
        }
        else{
            return false;
        }
    }
}