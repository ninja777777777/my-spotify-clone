#include <stdio.h>
int main() {
    int marks[10];
    printf("enter phy:");
    scanf("%d",&marks[0]);

    printf("enter chem:");
    scanf("%d",&marks[1]);

    printf("enter math:");
    scanf("%d",&marks[2]);

    printf("phy = %d, math = %d, chem = %d", marks[0], marks[2], marks[1]);
    return 0;


}