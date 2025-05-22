#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isdigit()

int main() {
    char expt[30];
    int i, stk[5], top;
    int op1, op2;
    
    printf("Enter the postfix expression: ");
    scanf("%s", expt);
    
    i = 0;
    top = -1; // initialize stack pointer
    
    while (expt[i] != '\0') {
        if (expt[i] == '+' || expt[i] == '-' || expt[i] == '*' || expt[i] == '/') {
            // Pop two operands
            op2 = stk[top--]; // pop second operand
            op1 = stk[top--]; // pop first operand

            // Perform operation
            if (expt[i] == '*') {
                stk[++top] = op1 * op2;
            }
            if (expt[i] == '/') {
                stk[++top] = op1 / op2;
            }
            if (expt[i] == '+') {
                stk[++top] = op1 + op2;
            }
            if (expt[i] == '-') {
                stk[++top] = op1 - op2;
            }
        }
        else if (isdigit(expt[i])) {
            // If character is a digit, push it onto the stack
            stk[++top] = expt[i] - '0'; // convert char to int
        }
        i++;
    }

    // The result is now on top of the stack
    printf("Result: %d\n", stk[top]);
    return 0;
}