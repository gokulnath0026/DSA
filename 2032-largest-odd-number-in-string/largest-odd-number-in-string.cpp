class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i= n-1;i>=0;i--){
            int digits=num[i]-'0';
            if(digits % 2 == 1){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};