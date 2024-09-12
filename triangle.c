#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Three Sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("This is Equilateral triangle\n");

    }
    
    else{
        printf("This is not equilateral triangle \n");
    }
    return 0;
}