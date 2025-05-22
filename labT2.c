#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

typedef struct{
    char items[Max]
    int top
}stack;

void init(stack*s){
    s->top=-1;
}
int isEmpty(stack*s){
    return s->top==-1
}
void push(stack*s char item){
    if(isFull(s)){
        printf("stack fulll \n")
    }else{
        s->items[++(s->top)]=item
    }
}
char pop(stack*s){
    if(isEmpty(s)){
        printf("stack Empty\n")
        return \0
    }else{
        return s->items[(s->top)--]
    }
}
char peek(stack*s){
    if(isEmpty(s)){
        printf("stack empty\n")
    }else{
        return s->items[s->tiop];
    }
}
int is valid expression(const char expr){
    init(&stack);
}
for(int i=0 expr[i]!=\0++){
    char ch=expr[i]
    if(ch==()){
        push(&stack,ch)
    }else if(ch==()){
        if isEmpty(&stack){
            return 0;
        }
        pop(&stack);
    }
}
return isEmpty(&stack);