//prompts user to enter name and age 

#include <stdio.h>
int main()
{
    char name;
    int age;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("I am %sYou are %d years old.", name, age);
    return 0;
}

