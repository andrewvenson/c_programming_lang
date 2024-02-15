#include <stdio.h>
#include <stdbool.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

void printHeader(char t){
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
}

void tempConversion(char t){
    float temp1, temp2;
    int start = 0, step = 20, max = 300;

    printHeader(t);

    temp1 = start;
    while(temp1 <= max){
        temp2 = t=='c'?((temp1*(9/5))+32):((temp1-32.0)*(5.0/9.0));
        printf("%s: %.0f\t%s: %.1f\n", t=='c'?"Celsius":"Fahrenheit",temp1, t=='c'?"Fahrenheit":"Celsius", temp2);
        temp1 = temp1+step;
    }
}

void tempConversionSimpler(char t, bool r){
    float temp2;
    printHeader(t);

    for(int temp1 = r==true?UPPER:LOWER; temp1<=UPPER && temp1>=LOWER; temp1=r==true?temp1-STEP:temp1+STEP){
        temp2 = t=='c'?((temp1*(9/5))+32):((temp1-32.0)*(5.0/9.0));
        printf("%s: %d\t%s: %.1f\n", t=='c'?"Celsius":"Fahrenheit",temp1, t=='c'?"Fahrenheit":"Celsius", temp2);
    }
}


int main(){
    tempConversion('f');
    tempConversionSimpler('c', false);
    tempConversionSimpler('c', true);
    tempConversionSimpler('f', true);
 
    return 0;
}
