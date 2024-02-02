#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr_p[1000001]={0};
    int arr_m[1000001]={0};
    int num, n;
    int m_max=0, p_max=0;
    int min=1000000;
    int minus=0;

    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf("%d", &n);
        if(n<0){
            minus=1;
            arr_m[abs(n)]=1;

            if(m_max<abs(n))
                m_max=abs(n);      
        }
        
        else{
            arr_p[n]=1;
            if(p_max<n)
                p_max=n;  
        }

        if(min>abs(n)){
            min=abs(n);
        }

    }

    if(minus==1){
        for(int j=m_max; j>min; j--){
            if(arr_m[j]==1){
                printf("-%d\n", j);
            }
        }
    }

    for (int i = min; i <= p_max; i++) {
        if(arr_p[i]==1){
            printf("%d\n", i);
        }
    }
    return 0;
}