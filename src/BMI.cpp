#include <iostream>

using namespace std;

int category_bmi(int m, int h){
    int bmi;
    bmi = m / (h*h);
    if(bmi <= 18)
        return 1;
    else if(bmi <= 24)
        return 2;
    else if(bmi <= 29)
        return 3;
    else
        return 4;
}

int main(){
    int t, arr[2];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr[j]);
        }
        printf("%d\n", category_bmi(arr[0], arr[1]));
    }
    return 0;
}