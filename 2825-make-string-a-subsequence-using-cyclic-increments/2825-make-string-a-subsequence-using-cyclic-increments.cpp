class Solution {
public:
    int n,m;
    bool f(int idx1,int idx2,string &s1,string &s2){
        if(idx2<0) return true;
         if(idx1==0){
             if(idx2>0) return false;
             if(s1[0]==s2[0] or s2[0] == (int)s1[0]+1)  return true;
             if(s1[0]=='z' && s2[0]=='a') return true; 
             return false;
         }
        if(idx2<=-1) return true;
        // if(idx1<=-1 || idx2<=-1) return false;
         bool case1= false,case2 = false,case3 = false;
        char inc = (int)s1[idx1] + 1;
        if(s1[idx1]=='z')  inc = 'a';
        cout<<inc<<" ";
        if(s1[idx1]==s2[idx2])
            case1  = f(idx1-1,idx2-1,s1,s2);
        else if(inc == s2[idx2])
            case2 = f(idx1-1,idx2-1,s1,s2);
        else
            case3 = f(idx1-1,idx2,s1,s2);
        return case1 | case2 | case3;
    }
    bool canMakeSubsequence(string s1, string s2) {
        this->n = s1.size(),this->m = s2.size();
        return f(n-1,m-1,s1,s2);
    }
};