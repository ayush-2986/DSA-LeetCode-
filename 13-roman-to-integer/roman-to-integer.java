class Solution {
    public int romanToInt(String s) {
        int previous = 0;
        int sum = 0;
        int digit;
        char current_char;

        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;
        

        for (int i = s.length()-1; i >= 0; i--){
            current_char = s.charAt(i);
            digit = (current_char=='I')?1:
                    (current_char=='V')?5:
                    (current_char=='X')?10:
                    (current_char=='L')?50:
                    (current_char=='C')?100:
                    (current_char=='D')?500:
                    (current_char=='M')?1000:
                    0;
            
            if (digit<previous){
                sum -= digit;
            }
            else{
                sum += digit;
            }
            previous = digit;
        }
        return(sum);
    }
}