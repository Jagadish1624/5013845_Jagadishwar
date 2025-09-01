#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int x) {
    stack1[++top1] = x;
}

void push2(int x) {
    stack2[++top2] = x;
}

int pop1() {
    return stack1[top1--];
}

int pop2() {
    return stack2[top2--];
}

void enqueue(int x) {
    push1(x);
}

void transfer() {
    while (top1 >= 0) {
        push2(pop1());
    }
}

void dequeue() {
    if (top2 < 0) {
        transfer();
    }
    if (top2 >= 0) {
        pop2();
    }
}

void printFront() {
    if (top2 < 0) {
        transfer();
    }
    if (top2 >= 0) {
        printf("%d\n", stack2[top2]);
    }
}

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int type, x;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &x);
            enqueue(x);
        } else if (type == 2) {
            dequeue();
        } else if (type == 3) {
            printFront();
        }
    }
    return 0;
}
