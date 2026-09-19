#include <stdio.h>
int main(){
    int celcius, fahrenheit;
    printf("enter temprature in celcius: ");
    scanf("%d", &celcius);
    fahrenheit = celcius * 9 / 5 + 32;
    printf("temprature in fahrenheit is: %d\n", fahrenheit);
}