#include<iostream>
using namespace std;

const int MOD = 1e9+7;

long long power(int base, int exp){
    long long result = 1;
    while(exp>0){
        if(exp %2 == 1){
            result = (result * base)%MOD;
        }
        base = (base*base)%MOD;
        exp /= 2;
    }
    return result%MOD;
}

int nthTermOfGP(int N, int A, int R) {
    if(N == 1){
        return A%MOD;
    }

    long long result = power(R, N-1)%MOD;
    long long term = ((A%MOD)*(result))%MOD;
    return (int)term;
}

int main()
{
    cout << nthTermOfGP(34,17,13)<<endl;
    return 0;
}