#include <stdio.h>

int main(){
    int num;
    int divisor[1000];

    while (1) {
        scanf("%d", &num);
        if(num==-1) {return 0;}

        int cnt=0;
        //약수구하기
        for (int i = 1; i < num; i++) {
            if(num%i==0){
                divisor[cnt]=i;
                cnt++;
            }
        }

        int sum=0;
        //약수의 합 구하기
        for(int i=0;i<cnt;i++){
            sum+=divisor[i];
        }
        //약수합==주어진수
        if(sum==num){
            printf ("%d = 1", num);
            for (int i = 1; i < cnt; i++) {
                printf(" + %d", divisor[i]);
            }
        }
        //약수합!=주어진수
        else {
            printf("%d is NOT perfect.", num);
        }
        //개행
        printf("\n");
    }
    return 0;
}