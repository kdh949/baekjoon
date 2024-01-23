#include <stdio.h>

int main(){
    char str[1000001]={0}; //String
    int a[26]={0}; //Character
    int n; //ASCII
    int max=0, result=0;

    scanf("%s", &str);

    for(int i=0; i<1000000; i++){
        n = str[i];

        /* A, a -> 0, B, b -> 1 ...*/
        if(n>96){ //lower
            n-=97;
            a[n]++;
        }
        else if(n>64) { //upper
            n-=65;
            a[n]++;
        }
    }

    max=a[0]; //initial setting
    for (int i = 1; i < 26; i++) {
        if(max==a[i]){
            result = -1;
        }

        else if(max<a[i]){
            max=a[i];
            result = i;
        }
    }

    if(result == -1){
        printf("?");
        return 0;
    }

    printf("%c", result+65);
    return 0;
}