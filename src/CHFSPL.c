#include <stdio.h>

int get_max_hitpoint(int arr[]){
    int max = 0, temp;
    for(int i = 0; i < 3; i++){
        if(i == 2){
            temp = arr[i] + arr[0];
        }else{
            temp = arr[i] + arr[i+1];
        }
        
        if(temp > max){
            max = temp;
        }
    }
    return max;
}

int main(){
    int t, arr[3];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
       for(int j = 0; j < 3; j++){
           scanf("%d", &arr[j]);
       }
       printf("%d\n", get_max_hitpoint(arr));
    }
    return 0;
}