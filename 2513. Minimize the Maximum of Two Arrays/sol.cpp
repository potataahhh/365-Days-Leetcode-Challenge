// 2 var (var 1,var 2)
// 2 non divisible element
//1 commmon
// 1 remaining



class Solution {
public:

    int f(long long var,long long divisor1,long long divisor2,long long uniqueCnt1,long long uniqueCnt2){
        long long a = var/divisor1;       // divisible by divisor1
        long long b = var/divisor2;       // divisible by divisor2
        long long c = var -a;             // not divisible by divisor1
        long long d = var-b;              // not divisible by divisor2
        long long e = var/lcm(divisor1,divisor2);     // common elements 
        long long f= a+b-2*e;                     // remaining elements
        long long g= (c+d+f)/2;

        if(c<uniqueCnt1 || d<uniqueCnt2 || uniqueCnt1+uniqueCnt2>g) return 0;
        return 1;

    }


    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long res=0;
        long long x=0;
        long long max=1e17;

        while(x<=max){
            long long mid=(x+max)/2;
            if(f(mid,divisor1, divisor2, uniqueCnt1, uniqueCnt2))
            res=mid,max=mid-1;
            else
            x=mid+1;
        }
        return res;
    }
};
