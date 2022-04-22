#include <iostream>
#include <algorithm>

using namespace std;

int get_max_time(int x, int m, int d){
    int time, delay, result = 0;
    time = x * m;
    delay = x + d;
    result = min(time, delay);
    return result;
}

int main(){
    int t, x, m, d;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            if (j == 0)
                scanf("%d", &x);
            else if(j == 1)
                scanf("%d", &m);
            else if(j == 2)
                scanf("%d", &d);
        }
        printf("%d\n", get_max_time(x, m, d));
    }
    return 0;
}