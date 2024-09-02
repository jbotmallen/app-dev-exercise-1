#include<stdio.h>

int main() {
    char name[100];

    printf("Hello, World! Please input your name to start:\n");
    gets(name);
    printf("Welcome back, %-5s", name);

    return 0;
}