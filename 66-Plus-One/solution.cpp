class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int n=digits.size();
        if(n<1) return vector<int>(1,1);
        
        vector<int> result(n,-1);
        
        int carry=1;
        for(int i=n-1;i>=0;--i){
            int sum=digits[i]+carry;
            carry=sum/10;
            result[i]=sum%10;
        }
        
        if(carry>0){
            result.insert(result.begin(),carry);
        }
        
        return result;
    }
};