#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person people[3] = {
        {"John", 30, 175.5},
        {"Alice", 25, 160.0},
        {"Bob", 35, 180.0}
    };

    int i;
    for (i = 0; i < 3; i++) {
        printf("Person %d - Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }

    return 0;
}