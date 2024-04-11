class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        int n = deck.size();
        sort(deck.begin(),deck.end());
        for(int i = 0 ;i  <n ; i++) q.push(i);
        vector<int>ans(n);
        for(int card:deck){
            ans[q.front()] = card;
            q.pop();
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};