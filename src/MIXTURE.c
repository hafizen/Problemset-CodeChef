#include <stdio.h>

const char* get_type(int a, int b){
    if(a != 0 && b != 0){
        return "Solution";
    }else if(a == 0){
        return "Liquid";
    }else if(b == 0){
        return "Solid";
    }
}

int main(){
    int t, arr[2];
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr[j]);
        }
     printf("%s\n", get_type(arr[0], arr[1]));   
    }
    return 0;
}