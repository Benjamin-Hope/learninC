#include <stdio.h>

void my_function(char[], int);

int main(){
    char name[] = "my name";
    int age = 111;
    my_function(name, age);
    return 0;
}

void my_function(char name[], int age){
    printf("My name is %s and I am %d yo", name, age);
}