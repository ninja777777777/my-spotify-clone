#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *f1,*f2,*merge;
    f1=fopen("f1.txt","r");
    f2=fopen("f2.txt","r");
    merge=fopen("m.txt","w");

    if (f1==NULL || f2==NULL || merge==NULL ) {
        printf("file doesnt exits\n");
        return 1;
    }
    char c;
    while ((c=fgetc(f1))!=EOF)
        fputc(c,merge);

    while((c=fgetc(f2))!=EOF) 
        fputc(c,merge);
    
    fclose(merge);
    fclose(f1);
    fclose(f2);

    return 0;   
}