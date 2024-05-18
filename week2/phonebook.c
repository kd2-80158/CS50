#include <stdio.h>
#include <string.h>

typedef struct {
    char names[20];
    char number[20];
} person;

int main(void)
{
    person people[3];

    strcpy(people[0].names, "Saurabh");
    strcpy(people[0].number, "+91-8810619472");

    strcpy(people[1].names, "Megha");
    strcpy(people[1].number, "+91-7810619472");

    strcpy(people[2].names, "Louis");
    strcpy(people[2].number, "+91-9990785954");

    char name[20];
    printf("Name: ");
    scanf("%s", name); // Removed & and newline character

    for (int i = 0; i < 3; i++) {
        if (strcmp(people[i].names, name) == 0) {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found..\n");

    return 0;
}
