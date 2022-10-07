#include <stdio.h>
struct student {
    char name[50];
    int age;
} s;
int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("age: %d\n", s.age);
    return 0;
}