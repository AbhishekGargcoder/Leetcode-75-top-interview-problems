class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = word;
        int  idx = -1;
        for(int i = 0; i < word.size();i++){
            if(word[i]==ch){idx = i;break;}
        }
        if(idx==-1) return word;
        string x = word.substr(0,idx+1);
        reverse(x.begin(),x.end());
        x = x + word.substr(idx+1);
        return x;
    }
};