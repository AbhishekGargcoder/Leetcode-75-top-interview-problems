class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int freq1[26] = {-1};
        int freq2[26] = {-1};
        for(int i = 0 ; i< 26;i++) freq1[i] = freq2[i] = -1;
        int n  = s.length();
        for(int i = 0 ;i < n ; i++) freq1[s[i]-'a'] = i;
        for(int i = 0 ;i < n ; i++) freq2[t[i]-'a'] = i;
        int sum  = 0;
        for(int i = 0 ;i  < 26;i++){
            if(freq1[i]!=-1) sum += abs(freq1[i]- freq2[i]);
        }
        return sum;
    }
};