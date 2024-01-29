#include <stdio.h>

unsigned long long fact(int n){
    unsigned long long result=1;
    for (int i = 1; i <= n; i++) {
        result*=i;
    }
    return result;
}

unsigned long long combination(int n, int r){
    unsigned long long a=1;

    if(n-r>r){
        for(int i=n; i>n-r; i--){
            a*=i;
        }
        return a/fact(r);
    }

    else {
        for(int i=n; i>r; i--){
            a*=i;
        }
        return a/fact(n-r);
    }

}

int main(){
    int num;
    int n, m;

    scanf("%d", &num);

    for(int i=0; i<num; i++){
        scanf("%d %d", &n, &m);
        printf("%llu\n", combination(m, n));
    }

    return 0;
}