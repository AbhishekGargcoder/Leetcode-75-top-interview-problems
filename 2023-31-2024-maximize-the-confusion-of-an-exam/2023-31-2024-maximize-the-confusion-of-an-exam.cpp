class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int res=0;

        int t=0,f=0;

        int j=0;

        for(int i=0;i<a.size();i++) {

            a[i]=='T'?t++:f++;

            if(min(t,f)<=k) res++;

            else a[j++]=='T'?t--:f--;

        }

        return res;
    }
};