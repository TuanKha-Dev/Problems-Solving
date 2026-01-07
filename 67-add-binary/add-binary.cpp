class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";

        while(i > -1 || j > -1 || carry == 1){
            if(i > -1)
                carry += a[i--] - '0';
            
            if(j > -1)
                carry += b[j--] - '0';

            result.push_back(carry % 2 + '0');
            carry /= 2;
        }

        reverse(result.begin(), result.end());
        
        return result; 
    }
};