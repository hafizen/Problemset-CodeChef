#include <stdio.h>

const char* pass_or_fail(int question, int correct, int limit){
    int point;
    point = (correct * 3) - (question - correct);
    if(point >= limit)
        return "PASS";
    else
        return "FAIL";
}

int main(){
    int test;
    int arr[3];
    scanf("%d", &test);

    for(int i = 0; i < test; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        printf("%s\n", pass_or_fail(arr[0], arr[1], arr[2]));
    }
    return 0;
}