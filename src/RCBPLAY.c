#include <stdio.h>

const char* is_possible_to_qualify(int x, int y, int z){
    int limit, possible_point;
    limit = y;
    possible_point = x + (2 * z);
    if(possible_point >= limit)
        return "yes";
    else
        return "no";
}

int main(){
    int t, arr[3];
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        printf("%s\n", is_possible_to_qualify(arr[0], arr[1], arr[2]));
    }
    return 0;
}