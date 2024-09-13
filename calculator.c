#include<stdio.h>
int mul(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int min(int a, int b){
    return a-b;
}
int di (int a, int b){
    return a/b;
}
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("sum =%d\n",add(a,b));
    printf("Divison =%d\n",di(a,b));
    printf("Minus =%d\n",min(a,b));
    printf("Multiplication =%d\n",mul(a,b));
}