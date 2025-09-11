class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        int first = s.lastIndexOf(" ");
        return s.length()-first-1;
    }
}