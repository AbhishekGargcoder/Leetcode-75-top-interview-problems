class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        string res = "";
        int i =0,j =0;
        bool flag = true;
        while(true){
            if(i==n&&j==m ) return res;
            if(i == n) {res += s2[j++]; continue;}
            if(j == m) {res += s1[i++]; continue;}
            if(flag == true){  res += s1[i++]; flag = false; }
            else{
            res += s2[j++];
            flag = true;                
            }
        }
        // while(i<n) res+=s1[i++];
        // while(j<m) res+=s2[j++];
        return res;
    }
};