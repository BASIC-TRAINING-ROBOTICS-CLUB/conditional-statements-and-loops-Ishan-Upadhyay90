#include<stdio.h>
int main(){
    char a;
    printf("Enter the Character\n");
    a=getchar();
    if(a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u'){
        printf("%c is vowel\n",a);
    }
    else{
        printf("%c is not vowel\n",a);
    }
    return 0;
}