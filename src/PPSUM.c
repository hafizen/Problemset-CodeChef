#include <stdio.h>

int method(int n, int d){
    int cont  = n*(n+1)/2;
    if(d == 1){
        return cont;
    }
    else{
        cont = method(cont, d - 1);
    }
    int res = cont;
    return res;
}

int main(){
    int n;
    int arr[2];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr[j]);
        }
        printf("%d\n", method(arr[1], arr[0]));
    }
    return 0;
}