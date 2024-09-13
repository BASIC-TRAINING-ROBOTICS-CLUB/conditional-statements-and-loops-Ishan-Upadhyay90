#include<stdio.h>
long long int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    long long int f;
    printf("Enter the number\n");
    scanf("%d",&f);
    printf("Factorial = %ld",fact(f));
    return 0;
}