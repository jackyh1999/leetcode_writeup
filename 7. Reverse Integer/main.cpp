class Solution {
public:
    int reverse(int x) {
        bool neg;
        if(x<0){
            if(x==INT_MIN) return 0;
            neg = true;         
            x *= -1;
        }
        else neg = false;
        int i = 0;
        int j = 0;
        int tmp = x;      
        int sum = 0;
        while((tmp/=10)>0) i++;
        while(x>0){
            if(sum > INT_MAX - (x % 10)*pow(10,i-j)) return 0;
            sum += (x % 10)*pow(10,i-j); 
            x /= 10;
            j++;
        }
        if(neg) sum *= -1;
        return sum;
    }
};