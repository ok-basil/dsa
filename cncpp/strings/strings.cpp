#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    char temp = 'A';

    char name[10];

    printf("Enter your name: ");
    // scanf("%s", name);
    gets(name);

    printf("Hello %s\n", name);

    // printf("%c\n", temp);
    // cout<<temp<<endl;
    // printf("%d\n", temp);
}