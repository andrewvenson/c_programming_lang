#include <stdio.h>

void tempConversion(char t){
    float temp1, temp2;
    int start = 0, step = 20, max = 300;

    //heading
    for(int x = 0; x < 32; x++){
        printf("-");
    }
    printf("\n|%s to %s converter|\n", t=='c'?"Celsius":"Fahrenheit", t=='c'?"Fahrenheit":"Celsius");
    for(int x = 0; x < 32; x++){
        printf("-");
        if(x==31){
            printf("\n");
        }
    }

    temp1 = start;

    while(temp1 <= max){
        temp2 = t=='c'?((temp1*(9/5))+32):((temp1-32.0)*(5.0/9.0));
        printf("%s: %.0f\t%s: %.1f\n", t=='c'?"Celsius":"Fahrenheit",temp1, t=='c'?"Fahrenheit":"Celsius", temp2);
        temp1 = temp1+step;
    }
}


int main(){
    tempConversion('f');
    tempConversion('c');
 
    return 0;
}
