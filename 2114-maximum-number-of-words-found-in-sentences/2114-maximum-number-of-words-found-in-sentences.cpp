class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(int  i=0;i<sentences.size();i++){
            int count = 0,j = 0;
            while(sentences[i][j]){
                if(sentences[i][j] == ' ') count++;
                j++;
            }
            count++;
            res = max(res,count);
        }
        return res;
    }
};