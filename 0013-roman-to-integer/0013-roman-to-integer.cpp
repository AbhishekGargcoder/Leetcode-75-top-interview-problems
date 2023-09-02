class Solution {
public:
    int romanToInt(string s) {
        short int i = 0,res = 0,n = s.length();
        while(s[i]){
            if(i+1<n&&s[i] == 'I' && s[i+1] =='X') res -= 1;
            else if(s[i] == 'I' && s[i+1] =='V') res -= 1;
            else if(s[i]=='I') res += 1;
           
            // if(i+1<n&&s[i] == 'V' && s[i+1] =='X') res -= 1;
            // else if(s[i] == 'V' && s[i+1] =='V') res -= 1;
            else if(s[i]=='V') res += 5;
            
            if(i+1<n&&s[i] == 'X' && s[i+1] =='L') res -= 10;
            else if(s[i] == 'X' && s[i+1] =='C') res -= 10;
            else if(s[i]=='X') res += 10;
            
            // if(i+1<n&&s[i] == 'L' && s[i+1] =='X') res -= 1;
            // else if(s[i] == 'L' && s[i+1] =='V') res -= 1;
            else if(s[i]=='L') res += 50;
            
            if(i+1<n&&s[i] == 'C' && s[i+1] =='D') res -= 100;
            else if(s[i] == 'C' && s[i+1] =='M') res -= 100;
            else if(s[i]=='C') res += 100;
           
            
            // if(i+1<n&&s[i] == 'D' && s[i+1] =='X') res -= 1;
            // else if(s[i] == 'D' && s[i+1] =='V') res -= 1;
            else if(s[i]=='D') res += 500;
            else if(s[i]=='M') res+= 1000;
            
            
            // else if(i+1<n&&s[i] == 'X' && s[i+1] =='C') res -= 10;
            // else if(s[i]=='X') res+= 10;
            // else if(i+1<n&&s[i] == 'L' && s[i+1] =='L')res += 50;
            // else if(s[i] == 'C') res += 100;
            // else if(s[i] == 'D') res += 500;
            // else if(s[i] == 'M') res += 1000;
            // else if(s[i] == 'X') res += 10;
            i++;
        }
            return res;
        
    }
};