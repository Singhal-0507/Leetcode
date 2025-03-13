class Solution {
public:
    bool isPalindrome(string s) {
        int i =0,j=s.size()-1;
        while(i<j){
            if ((s[i] > 'Z' || s[i] < 'A') && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
                i++;
                continue;
            }
            if ((s[j] > 'Z' || s[j] < 'A') && (s[j] < 'a' || s[j] > 'z') && (s[j] < '0' || s[j] > '9')){
                j--;
                continue;
            }
            char ch1 = tolower(s[i]);
            char ch2 = tolower(s[j]);
            if(ch1 != ch2) return false;
            else if(ch1==ch2){
                i++;
                j--;
            }

        }
        return true;
    }
};