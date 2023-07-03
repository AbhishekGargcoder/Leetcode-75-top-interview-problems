class Solution {
public:
   bool buddyStrings(string s, string goal) {
      
      int n=s.length(),m= goal. length();
      if(n!=m) return false;
      int swpIdx=-1;
  for(int i=0;i<n;i++){
    if(s[i]!=goal[i]){
       if(swpIdx==-1)
          swpIdx = i;
       else{
         swap(s[swpIdx],s[i]);
         if(s==goal)
             return true;
         else return false;
        }
       }   
    }
   if(swpIdx!=-1) return false;
   unordered_set<int>hs;
   for(int i=0;i<n;i++)
       hs.insert(s[i]);
   if(hs.size()!=n) return true;
          
      return false;
    }
};