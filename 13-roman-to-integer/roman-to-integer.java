class Solution {
    public int romanToInt(String s) {
        int i = s.length()-1;
        int last = 0;
        int num = 0;
        while (i>=0){
            char letter = s.toUpperCase().charAt(i);
            int letterValue = (letter == 'I')?1:(letter=='V')?5:(letter=='X')?10:(letter=='L')?50:(letter=='C')?100:(letter=='D')?500:(letter=='M')?1000:0;

            num = (last>letterValue)?(num-letterValue):(num+letterValue);
            last = letterValue;
            i--;
        }
        return num;
    }
}