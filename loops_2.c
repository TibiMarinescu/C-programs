#include <stdio.h>
int main(){
    int i = 0;
    int result = 0;
    for (i=0;i<11;i++){
        result = i * 8;
        printf("%dx8 = %d \n", i, result);
    }
    return 0;
}
