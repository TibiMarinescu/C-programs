#include <stdio.h>
int main(){
    int enginePower, resistance, weight, height;
    int i,no_robots;
    int sum = 0;
    scanf("%d", &no_robots);
    for (i = 0; i<no_robots; i++){
    scanf("%d\n", &height);
    scanf("%d", &weight);
    scanf("%d", &enginePower);
    scanf("%d", &resistance);
    //printf("enginePower %d resistance %d weight %d height %d\n", enginePower, resistance, weight, height);
    sum = sum + (enginePower + resistance)*(weight - height);
    //printf("sum %d", sum);
    }
    printf("%d",sum);
    return 0;
}
