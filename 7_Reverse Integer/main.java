class Solution {
    public int reverse(int x) {
        String s = new StringBuilder().append(Math.abs(x)).reverse().toString();
        try{
            if(x<0)
                return Integer.parseInt(s)*(-1);
            else
                return Integer.parseInt(s);
        }
        catch(NumberFormatException e){
            return 0;
        }        
    }
}