#include<stdio.h>
void change(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=89,b=78;
    printf(" Before swaping a=%d b=%d\n ",a,b);
	change(&a,&b);
	printf("After swaping a=%d b=%d ",a,b);
}