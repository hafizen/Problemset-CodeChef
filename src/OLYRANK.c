#include <stdio.h>

int compare(int arr[]){
    int sum1 = 0, sum2 = 0;
        int res;
    for(int i = 0; i < 6; i++){
        if(i < 3){
            sum1 += arr[i];
        }
        else
            sum2 += arr[i];
    }
    if(sum1 > sum2)
        res = 1;
    else
        res = 2;
    return res;
}

int main(){
    int n;
    int medal[6];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            scanf("%d", &medal[j]);
        }
        printf("%d\n", compare(medal));
    }
    return 0;
}