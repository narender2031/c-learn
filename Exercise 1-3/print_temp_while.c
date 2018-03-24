#include<stdio.h>
int main(){
    int fahr, cal;
    int lower, upper, steps
    lower = 0;
    upper = 300;
    steps = 20;
    fahr = lower;
    while(fahr <= upper){
        cal = 5 * (fahr - 32)/9;
        printf("%d\t%d\n", fahr, cal);
        fahr = fahr + steps;
    }
}

