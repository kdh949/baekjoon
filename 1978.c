#include <stdio.h>

int main(){
    int n;
    int num;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        
        if(num==1){
            continue;
        }

        else{
            int tag=0;
            for(int j=2; j<num; j++){
                if(num%j==0){
                    tag=1;
                    break;
                }
            }
            if(tag==0){
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}