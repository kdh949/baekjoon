#include <stdio.h>

int main(){
    int n;
    int star;
    int count=0; //출력횟수

    scanf("%d", &n);

    star = 1 + 4*(n-1);

    for(int i=0; i<star; i++){

        /* 맨 윗줄과 아랫줄 출력*/
        if(i == 0 || i == star-1){
            for(int j=0; j<star; j++){
            printf("*");
            }
            printf("\n");
        }

        /* n+1, n-1번째 줄 */
        else if(i == 1 || i == star-2){
            printf("*");
            for(int j=0; j<star-2; j++){
                printf(" ");
            }
            printf("*\n");
        }
         /* n+2, n-2번째 줄 */
        else if(i == 2 || i == star-3){
            printf("* ");
            for(int j=0; j<star-4; j++){
                printf("*");
            }
            printf(" *\n");
        }

        /* n+3, n-3번째 줄 */
        else if(i == 3 || i == star-4){
            printf("* ");
            for(int j=0; j<star-7; j++){
                printf("*");
                if(j==0){
                    printf("   ");
                }
            }
            printf(" *\n");
        }

        /* n+4, n-4번째 줄 */
        else if(i == 4 || i == star-5){
            for(int j=0; j<star; j++){
                if((j+1)%2==0){
                    printf(" ");
                }
                else
                 printf("*");
                }
            printf("\n");
        }




    }




}