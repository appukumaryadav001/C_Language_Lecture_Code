#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    char branch[20];
    int roll;
};

void display(struct student s);

int main() {
    struct student s;
    printf("\nEnter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline character
    printf("\nEnter branch: ");
    fgets(s.branch, sizeof(s.branch), stdin);
    s.branch[strcspn(s.branch, "\n")] = '\0'; // Remove newline character
    printf("\nEnter roll: ");
    scanf("%d", &s.roll);
    display(s);
    return 0;
}

void display(struct student s) {
    printf("\nName = %s\nBranch = %s\nRoll = %d", s.name, s.branch, s.roll);
}