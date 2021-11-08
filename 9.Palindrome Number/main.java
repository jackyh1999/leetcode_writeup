class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        String s1 = new StringBuilder().append(x).reverse().toString();
        String s2 = new StringBuilder().append(x).toString();
        if(s1.equals(s2)) return true;
        else return false;
    }
}