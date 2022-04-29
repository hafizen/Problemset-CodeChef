#include <stdio.h>

const char* choose(int x, int y, int z){
    int count;
    count = x + y;
    if(count > z){
        return "train";
    }else if(count < z){
        return "planebus";
    }else{
        return "equal";
    }
}

int main(){
    int t, arr[3];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        printf("%s\n", choose(arr[0], arr[1], arr[2]));
    }
    return 0;
}