class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length == 1){
            return strs[0];
        }
        else{    
            int shortestLength = strs[0].length();
            for (int u=1; u<strs.length; u++){
                if (shortestLength>strs[u].length()){
                    shortestLength = strs[u].length();
                }
            }
            // j deals with the characters of a string
            // i deals with the words in the string array
            int temp = 0;
            for(int j=0; j<shortestLength; j++){
                for(int i=1 ; i<strs.length; i++){
                    if(strs[0].charAt(j) == strs[i].charAt(j)){
                        temp =j;
                    }
                    else{
                        temp =j;
                        return strs[0].substring(0, j);
                    }
                }
            }
            if (shortestLength==0){
                return "";
            }
            else{
                return strs[0].substring(0, temp+1);
            }
        }
    }
}