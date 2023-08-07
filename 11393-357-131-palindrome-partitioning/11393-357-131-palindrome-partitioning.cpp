class Solution {
public:
  bool isPalindrom(string s,int l, int h){
  
        while(l<=h)
          if(s[l++]!=s[h--])
               return false;
        return true;
   }
 vector<vector<string>>res;
void part(int idx,string &s,vector<string>&temp){
   if(idx ==s.length()){
       res.push_back(temp);
       return;
    }
for(int i=idx;i<s.length();i++){
string left = s.substr(idx, i);  
    if(isPalindrom(s,idx,i)){
     temp.push_back(s.substr(idx,i-idx+1));

     part(i+1,s,temp);
     temp.pop_back();

    }
 }
       
}       
        
     
    
   
    
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        part(0,s,temp);
        return res;
    }
};