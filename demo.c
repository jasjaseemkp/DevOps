#include <stdio.h>
#include <stdlib.h>

int Factorial(int N){
    int fact=1,i;
    for(i=1;i<N+1;i++){
        fact *= i;
    }

    return fact;
}

int main(){
    int N,fact;
    printf("Enter A Number:");
    scanf("%d",&N);
    fact = Factorial(N);
    printf("Factorial of %d is %d", N, fact);
    return 0;
}