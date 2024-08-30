#include<stdio.h>
#include <string.h>


int main(){

    FILE *file;
    
    char name[50];
    char course[50];
    
    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("file not open\n");
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        printf("Enter the name student %d: ", i + 1);

        fgets(name, sizeof(name), stdin); 
        name[strcspn(name, "\n")] = 0;

        printf("Enter the course of student %d: ", i + 1);

        fgets(course, sizeof(course), stdin);
        course[strcspn(course, "\n")] = 0; 

        fprintf(file, "Student %d: %s, Course: %s\n", i + 1, name, course);
    }

    fclose(file);
    printf("data write data.txt successfully\n");

    return 0;
}