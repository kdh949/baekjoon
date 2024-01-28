#include <stdio.h>

int main(){
    int s[3];
    int temp;

    while (1){
        scanf("%d %d %d", &s[0], &s[1], &s[2]);

        if(s[0]==0 && s[1]==0 && s[2]==0){
            return 0;
        }

        for (int i = 0; i < 3; i++) {
            for(int j=i+1; j<3; j++){
                if(s[i]>s[j]){
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        

        if((s[0]*s[0])+(s[1]*s[1])==(s[2]*s[2])){
            printf("right\n");
            continue;
        }

        printf("wrong\n");
    }
}