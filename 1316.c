#include <stdio.h>

int main(){
    int n;
    int j;
    int cnt=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int alphabet[26]={0};
        char s[101];

        scanf("%s", &s);

        j=1;
        alphabet[s[0]-97]=1;

        while (s[j]!=NULL) {
            if(s[j-1] != s[j]){
                if(alphabet[s[j]-97] == 1){
                    j=-1;
                    break;
                }
            }
            alphabet[s[j]-97]=1;
            j++;
        }
        if(j>0){
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}