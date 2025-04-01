 #include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[50];
    int enrollNo;
    char address[100];
    char phone[15];
    char email[50];
};

void addStudent(FILE *file) {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter Enroll No: ");
    scanf("%d", &s.enrollNo);
    printf("Enter address: ");
    scanf("%s", s.address);
    printf("Enter phone number: ");
    scanf("%s", s.phone);
    printf("Enter email: ");
    scanf("%s", s.email);
    fwrite(&s, sizeof(struct Student), 1, file);
    printf("Student added successfully!\n");
}

void displayStudents(FILE *file) {
    struct Student s;
    rewind(file);
    printf("Displaying all students:\n");
    while(fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s, Enroll No: %d, Address: %s, Phone: %s, Email: %s\n", s.name, s.enrollNo, s.address, s.phone, s.email);
    }
}

int main() {
    FILE *file;
    int choice;
    file = fopen("students.dat", "rb+");
    if (!file) {
        file = fopen("students.dat", "wb+");
    }
    do {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addStudent(file); break;
            case 2: displayStudents(file); break;
            case 3: fclose(file); exit(0);
            default: printf("Invalid choice!\n");
        }
    } while(choice != 3);
    return 0;
}