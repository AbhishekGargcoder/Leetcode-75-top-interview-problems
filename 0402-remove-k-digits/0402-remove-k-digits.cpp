class Solution {
public:
    string removeKdigits(string s, int k) {
        string ans = "";
        stack<char>st;
        for(char &c:s){    
            while(!st.empty()&&st.top()>c&&k>0){
                k--;
                st.pop();
            }
            st.push(c);
        }
        while(k>0&&st.empty()==NULL){
            st.pop();k--;
        }
        while(st.size()){
            ans+=st.top(); st.pop();
        }
        reverse(ans.begin(),ans.end());
        int f =  0;
        for(int i = 0;i<ans.size();i++){
            if(ans[i]!='0'){
                f = 1;
                return ans.substr(i,ans.size()-i);
            }
        }
        if(f == 0){
            
            return  ans = '0';
        }
        if(ans=="") ans+='0';
        return ans;
    }
};