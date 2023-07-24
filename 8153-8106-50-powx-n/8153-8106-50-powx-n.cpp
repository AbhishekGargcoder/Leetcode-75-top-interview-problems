class Solution {
public:
   long double myPow(double a, int n) {
        
        int m = n;
   /*    if(n==-2147483648){
           if(a==1 or a==-1)
           return 1;
           else return 0;}*/
     if(n<0){
       if(n==-2147483648){ n= 2147483647;}
        else { n= -n;}}
       
       if(((m&1)==0)&&a<0) a= -a;
       long double res = 1;
        while(n){
           if(n&1) res = res*a;
           a = a*a;
           n = n>>1;

        }
    //    if(m&1==0)if(res<0) res = -res;
        if(m<0) return (long double)1/res;
        return res;
        
    }
};