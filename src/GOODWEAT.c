#include <stdio.h>

const char* count(int arr[]){
    int count_zero = 0, count_one = 0;
    for(int i = 0; i < 7; i++){
        if(arr[i] == 0)
            count_zero++;
        else
            count_one++;
    }

    if(count_one > count_zero)
        return "yes";
    else
        return "no";
}

int main(){
    int t, arr[7];
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 7; j++){
            scanf("%d", &arr[j]);
        }
        printf("%s\n", count(arr));
    }
    return 0;
}