#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr_p[1000001]={0};
    int arr_m[1000001]={0};
    int num, n;
    int max=0;
    int minus=0;

    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        if(n<0){
            minus=1;
            arr_m[abs(n)]=1;
        }
        else{
            arr_p[n]=1;
        }

        if(max<abs(n)){
            max=abs(n);
        }
    }

    if(minus==1){
        for(int j=max; j>0; j--){
            if(arr_m[j]==1){
                printf("-%d\n", j);
            }
        }
    }

    for (int i = 0; i <= max; i++) {
        if(arr_p[i]==1){
            printf("%d\n", i);
        }
    }
    return 0;
}