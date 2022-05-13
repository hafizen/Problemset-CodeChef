#include <iostream>

using namespace std;

int get_format(int a, int b){
    int format;
    format = a + b;
    if(format < 3)
        return 1;
    else if(format <= 10)
        return 2;
    else if(format <= 60)
        return 3;
    else
        return 4;
}

int main(){
    int t, arr[2];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j= 0; j < 2; j++){
            scanf("%d", &arr[j]);
        }
        printf("%d\n", get_format(arr[0], arr[1]));
    }
    return 0;
}