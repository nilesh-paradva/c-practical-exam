#include <stdio.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
    float price;
};

void carDetail(struct Car car) {

    printf("Model: %s\n", car.model);
    printf("year: %d\n", car.year);
    printf("Price: $%.2f\n\n", car.price);

}

int main() {
    int get;

    printf("Enter the number of cars: ");
    scanf("%d", &get);

    struct Car cars[get];

    for (int i = 0; i < get; i++) {
        printf("\n\nEnter detail car %d:\n", i + 1);

        printf("Model: ");
        scanf("%s", cars[i].model);

        printf("year: ");
        scanf("%d", &cars[i].year);

        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\n\nCar Details:\n");

    for (int i = 0; i < get; i++) {
        printf("Car %d :-\n\n", i + 1);
        carDetail(cars[i]);
    }

    return 0;
}
