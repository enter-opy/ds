#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int s[5], top=-1;

void push(void) {
    if (top == 4) printf("\nStack overflow!!!!");
    else {
        printf("\nEnter element to insert:");
        scanf("%d",&s[++top]);
    }
}

void pop(void) {
    if (top == -1) printf("\nStack underflow!!!");
    else printf("\nElement popped is: %d",s[top--]);
}

void disp(void) {
    int t = top;

    if ( t == -1) printf("\nStack empty!!");
    else printf("\nStack elements are:\n");

    while (t >= 0) printf("%d ",s[t--]);
}


int main(void) {
    int ch;

    do {
        printf("\n...Stack operations.....\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.Display\n");
        printf("4.Exit\n________________\n");
        printf("Enter choice:");

        scanf("%d",&ch);

        switch(ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: disp();break;
            case 4: exit(0);
            default: printf("\nInvalid choice");
        }
    } while(1);

    return 0;
}