#include<stdio.h>
//C program to calculate the nth fibonacci number using recursion
//Multiple call
int fibo(int n){
    if(n==0) 
    return 0;
    else if(n==1) 
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n,i;
    printf("Enter the number of terms to be printed: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("%d\n", fibo(i));
    }
    
    return 0;
}
