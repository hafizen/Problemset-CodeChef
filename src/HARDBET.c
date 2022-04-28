#include <stdio.h>

const char* get_winner_bet(int a, int b, int c){
    if(a < b && a < c)
        return "Draw";
    else if(b < a && b < c)
        return "Bob";
    else if(c < a && c < b)
        return "Alice";
}

int main(){
    int t, arr[3];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        printf("%s\n", get_winner_bet(arr[0], arr[1], arr[2]));
    }
    return 0;
}