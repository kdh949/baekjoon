#include <stdio.h>
#include <time.h>

int main(){
    int TIME = 0;

    /* Timer on */
	clock_t start = clock();


    int num;
    long long a=1, b=0;
    long long temp_a, temp_b;

    scanf("%d", &num);

    int light = num*num;

    temp_a = a;
    temp_b = b;

    //A > B , a=1, b=0 > a=0, b=1 => a--, b++
    //B > BA, a=0, b=1 > a=1, b=1 => a++

    for(int i=0; i<num; i++){
        while(temp_a != 0 || temp_b != 0){
            if(temp_a > light){
                a-=light;
                b+=light;
                temp_a-=light;
            }
            else if(temp_a > 0){
                a--;
                b++;
                temp_a--;
            }
            else if(temp_b > light){
                a+=light;
                temp_b-=light;
            }
            else if(temp_b > 0){
                a++;
                temp_b--;
            }
        }

        temp_a = a;
        temp_b = b;
    }

    printf("%lld %lld", a, b);

    /* Timer off */
	TIME += ((int)clock() - start) / (CLOCKS_PER_SEC / 1000);
    
	printf("\nTIME : %d ms\n", TIME); /* ms 단위로 출력 */

    return 0;
}