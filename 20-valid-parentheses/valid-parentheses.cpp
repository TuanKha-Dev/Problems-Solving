class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        
        int n = s.size();

        if(n % 2 != 0) {
            return false;
        }

        vector<char> temp;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                temp.push_back(s[i]);
            else{
                if(s[i] == ')' && !temp.empty() && temp.back() == '(')
                    temp.pop_back();
                else if(s[i] == '}' && !temp.empty() && temp.back() == '{')
                    temp.pop_back();
                else if(s[i] == ']' && !temp.empty() && temp.back() == '[')
                    temp.pop_back();
                else
                    return false;
            }
        }

        if(temp.size() != 0)
            return false;

        return true;
    }
};