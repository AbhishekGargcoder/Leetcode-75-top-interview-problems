class Solution {
public:
int res = 0;
void acceptOrNot(int &n, vector<vector<int>>& requests, vector<int>&indegree,int curr,int count){
        if(curr==requests.size()){
            for(int i =0;i<n;i++){
                if(indegree[i]!=0)
                    return;
            }
            res= max(res,count);
            return;
        }
            int src = requests[curr][0];
            int dest = requests[curr][1];
            indegree[src]--;
            indegree[dest]++;
            acceptOrNot(n,requests,indegree,curr+1,count+1);
            indegree[src]++;
            indegree[dest]--;
            acceptOrNot(n,requests,indegree,curr+1,count);
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int>indegree(n,0);
        acceptOrNot(n,requests,indegree,0,0);
        return res;
    }
};