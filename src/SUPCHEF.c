#include <stdio.h>

void watching_season_one (int m, int n, int k){
    int dur_watch = n * k;
    if(m > dur_watch)
        printf("yes\n");
    else
        printf("no\n"); 
}



int main(){
    int t, arr[3];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        watching_season_one(arr[0], arr[1], arr[2]);
    }
    return 0;
}