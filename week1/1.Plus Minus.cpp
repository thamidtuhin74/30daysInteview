#include<stdio.h>
int main(){
    int n,i,plus=0,minus=0,zero = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>=1 || arr[i]<0){
            if(arr[i]>=1){
                plus++;
                // printf("%d \n",plus);
            }
            else{
                minus++;
            }
        }
        else{
            zero++;
        }
    }
    
    printf("%.6f\n",plus*1.0/n);
    printf("%.6f\n",minus*1.0/n);
    printf("%.6f\n",zero/n*1.0);
    
    return 0;
}