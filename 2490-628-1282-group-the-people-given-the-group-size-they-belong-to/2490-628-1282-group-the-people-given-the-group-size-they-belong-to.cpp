class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>&gS) {
  unordered_map<int,vector<int>>hm;
 int n = gS.size();
    for(int i=0;i<n;i++)
        hm[gS[i]].push_back(i);
    vector<vector<int>>res;    
    for(auto &gsz: hm){
    
  //   gsz.size();
      int s=gsz.first;
     vector<int>x;
 for(int i=0;i<gsz.second.size();i++){       
     
    if(x.size()==gsz.first){

           res.push_back(x);
        x.clear();
      }
           

       
       x.push_back(gsz.second[i]);
   
     }
        res.push_back(x);
  }                 
        return res;
                           
                    
        
            
        
        
        
        
        
    }
};