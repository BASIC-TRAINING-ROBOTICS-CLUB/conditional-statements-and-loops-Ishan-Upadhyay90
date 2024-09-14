#include<stdio.h>
struct stu{
    int id;
    char name[20];
    float cpi,spi;
};
int main(){
    struct stu a,om;
    a.id=202;
    a.cpi=8.5;
    a.spi=6.8;
    printf("Ishan =");
    printf("%d\n",a.id);
    printf("%f\n",a.cpi);
    printf("%f\n",a.spi);
    om.id=1013;
    om.cpi=9.5;
    om.spi=10.8;
    printf("om= ");
 printf("%d\n",om.id);
    printf("%f\n",om.cpi);
    printf("%f\n",om.spi);
}