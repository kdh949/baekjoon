#include <stdio.h>

int main(){
    int arr[10001]={0};
    int tmp_sum=0;
    int tmp;

    for(int i=1; i<10000; i++){
        tmp_sum=i;
        tmp=i;

        for (int j=0; j<5; j++) {
            tmp_sum+=tmp%10;
            tmp/=10;
        }
        if (tmp_sum>10000)
            continue; //배열 인덱스 초과 제외
        arr[tmp_sum]=1;
    }

    for (int i = 1; i <= 10000; i++) {
        if (arr[i]!=1) {
            printf("%d\n", i);
        }
    }
    return 0;
}