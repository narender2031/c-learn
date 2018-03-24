#include <stdio.h>

int main(){
    float fahr, cal;
    float steps = 10, upper = 300;
     printf("calcius\t\t\t fahr\n");
    for(cal=0;cal <= upper;cal = cal+steps){
        fahr = cal * (1.8) + 32;
        printf("%f\t\t %f\n", cal, fahr);
    }
}