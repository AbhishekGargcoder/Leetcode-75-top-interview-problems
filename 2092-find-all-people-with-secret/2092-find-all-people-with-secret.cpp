class Solution {
public:
//     vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
//     }
     using int2=pair<int, int>;
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson)
    {
        int inf  = INT_MAX;
        vector<vector<int2>> adj(n);
        for(auto& meet: meetings){
            int x=meet[0], y=meet[1], time=meet[2];
            adj[x].emplace_back(time, y);
            adj[y].emplace_back(time, x);
        }
        vector<int> known(n, inf);
        vector<int> list;
        priority_queue<int2, vector<int2>, greater<int2>> pq;// min heap
        pq.emplace(0, 0);
        pq.emplace(0, firstPerson);
        while(!pq.empty()){
            auto [s, x]=pq.top();
            pq.pop();
            if (known[x]!=INT_MAX) continue;
        //    cout<<"knowing secret time="<<s<<", person="<<x<<endl;
            list.push_back(x);
            known[x]=s;
            for(auto& [t, y]: adj[x]){
                if (known[y]!=INT_MAX ||t<s) continue;//known or too early met
                pq.emplace(t, y);
            
            }
        }
        // ans
        return list;
    }
};