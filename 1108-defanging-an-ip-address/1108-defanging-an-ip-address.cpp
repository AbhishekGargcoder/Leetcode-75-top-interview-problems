class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        int n = address.length();
        for(int i =0;i<address.length();i++){
            if(i+1<n&&(address[i+1] == '.')){
                res+= address[i];
                res+=   "[.]";
                i++;
                continue;
            }
            
            res += address[i];
        }
        return res;
    }
};