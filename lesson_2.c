#include <stdio.h>

void isPrime();

int main() {

//    task 1
    isPrime();



// task 2
    int summa = 0;
    int x = 1;
    while(x <11){
        summa += x;
        x += 1;
    }
    printf("%d",summa );
    return 0;



}
//task 1
void isPrime() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    int i = 2;
    int prime = 0;
    while (i < n) {
        if (n % i == 0) {
            printf("this number is not prime\n");
            prime = 1;
            break;
        } else
            i++;
    }
    if (prime == 0) {
        printf("this is prime number\n");
    }
}