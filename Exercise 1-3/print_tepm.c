#include <stdio.h>

int main(){
    int fahr, cal;
    int steps = 20, upper = 300;
     printf("fahr\t calcius\n");
    for(fahr=0;fahr <= upper;fahr = fahr+steps){
        cal = 5 * (fahr - 32)/9;
        printf("%d\t\t %d\n", fahr, cal);
    }
}
//with for loop