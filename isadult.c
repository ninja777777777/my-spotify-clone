#include <stdio.h>
int main() {
    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18) {
        printf("is adult \n");


    }
    else {
        printf("not adult \n");

    }
    printf("thank you");
    return 0; 
}