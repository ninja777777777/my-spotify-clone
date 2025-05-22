#include <stdio.h>

int main() {
    int age;
    printf("enter number:");
    scanf("%d",&age);

    int *ptr = &age;
    int _age = *ptr;

    printf("your age is : %d",_age);
    return 0;

}