class Solution {
private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
public:
    string fractionAddition(string expression) {
        int n=0;
        int d=1;

        int i=0;
        while(i<expression.size()){
            int cn=0;
            int cd=0;

            bool isNeg = false;

            if(expression[i] == '-'||expression[i]=='+'){
                if(expression[i]=='-') isNeg = true;
                i++;
            }

            while(isdigit(expression[i])){
                int val = expression[i] - '0';
                cn = cn*10+val;
                i++;
            }

            if(isNeg)cn*= -1;
            i++;

            while(isdigit(expression[i])){
                int val = expression[i] - '0';
                cd = cd*10+val;
                i++;
            }

            n = n*cd+cn*d;
            d*=cd;
        }

        int g = abs(gcd(n,d));
        n/=g;
        d/=g;

        return to_string(n) + "/" + to_string(d);        
    }
    
};
