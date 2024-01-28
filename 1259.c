#include <stdio.h>

int main(){
    while(1){
        int i=0;
        char num[100000];
        int palindrome=0; //1=팰린드롬수, 0=그외

        scanf("%s", &num);

        if(num[0]=='0' && num[1]==NULL){
            return 0; 
        }

        while (num[i]!=NULL) {
            i++;
        }

        if(i==1){
            printf("yes\n");
            continue;
        }

        else if(i%2==0){
            for (int j = 0; j < i/2; j++) {
                if(num[j]==num[i-j-1]){
                    palindrome=1;
                }
                else{
                    palindrome=0;
                    printf("no\n");
                    break;
                }
            }
        }

        else {
            for (int j = 0; j < (i-1)/2; j++) {
                if(num[j]==num[i-j-1]){
                    palindrome=1;
                }
                else{
                    palindrome=0;
                    printf("no\n");
                    break;
                }
            }
        }
        
        if(palindrome == 1){
            printf("yes\n");
        }

    }
}