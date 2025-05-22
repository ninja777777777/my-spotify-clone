#include <stdio.h>
//void swap (int a, int b);
void _swap(int *a,int *b);

 int main() {
    int x=3,y=5;
    //swap(x,y);
    //printf("x=%d & y=%d\n",x,y);

    _swap(&x,&y);
    printf("x=%d & y=%d\n",x,y);
    return 0;
}
//call by value
//void swap(int a,int b) {
  //  int t=a;
    //a=b;
    //b=t;
    //printf("a=%d & b=%d\n",a,b);
    
//}
void _swap(int *a,int *b) {
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d & b=%d\n",a,b);
} 
/*void square (int n);
void _square(int *n);

int main() {
    int num=4;
    square(num);
    printf("num=%d\n",num);

    _square(&num);
    printf("num=%d\n",num);
    return 0;
}   
void square(int n) {
    n=n*n;
    printf("square=%d\n",n);
}    

void _ square(int *n) {
    *n=(*n) * (*n);
    printf("square=%d\n",n);
}*/