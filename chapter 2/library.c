// Library managment system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int Book_id;
    char *Book_name;
    int issues;
};

struct Student {
    int Student_id;
    char *Student_name;
};

struct Library {
    struct Book **book;
    int book_size;
    struct Student **students;
    int student_size;
};

struct Book *Add(char *book_name, int id) {
    struct Book *new_book = (struct Book *)malloc(sizeof(struct Book));
    new_book->Book_name = (char *)malloc(strlen(book_name) + 1);

    strcpy(new_book->Book_name, book_name);
    new_book->Book_id = id;
    new_book->issues = 0;

    printf("Book added successfully to the library\n");
    return new_book;
}

int remove_Book(struct Library *lib, int id) {
    for (int i = 0; i < lib->book_size; i++) {
        if (lib->book[i]->Book_id == id) {
            struct Book *temp = lib->book[i];
            for (int j = i; j < lib->book_size - 1; j++) {
                lib->book[j] = lib->book[j + 1];
            }
            lib->book_size--;
            free(temp);
            printf("Book removed successfully from the library\n");
            return 1;
        }
    }
    printf("Book not found in the library\n");
    return 0;
}

int issue_Book(struct Library *lib, int book_id, int student_id) {
    struct Book *book = NULL;
    struct Student *student = NULL;

    for (int i = 0; i < lib->book_size; i++) {
        if (lib->book[i]->Book_id == book_id && lib->book[i]->issues == 0) {
            book = lib->book[i];
            break;
        }
    }

    for (int i = 0; i < lib->student_size; i++) {
        if (lib->students[i]->Student_id == student_id) {
            student = lib->students[i];
            break;
        }
    }

    if (student != NULL && book != NULL) {
        book->issues = 1;
        printf("Book issued successfully to the student ID: %d\n", student_id);
        return 1;
    } else {
        if (book == NULL) {
            printf("Book not found or already issued\n");
        }
        if (student == NULL) {
            printf("Student not found\n");
        }
    }
    return 0;
}

int return_Book(struct Library *lib, int book_id) {
    struct Book *book = NULL;

    for (int i = 0; i < lib->book_size; i++) {
        if (lib->book[i]->Book_id == book_id && lib->book[i]->issues == 1) {
            book = lib->book[i];
            break;
        }
    }

    if (book != NULL) {
        book->issues = 0;
        printf("Book returned successfully by the book ID: %d\n", book->Book_id);
        return 1;
    } else {
        if (book == NULL) {
            printf("Book not found here\n");
        }
    }
    return 0;
}

struct Student *Add_student(char *student_name, int id) {
    struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));
    new_student->Student_name = (char *)malloc(strlen(student_name) + 1);

    strcpy(new_student->Student_name, student_name);
    new_student->Student_id = id;
    return new_student;
}

int main() {
    struct Library *lib = (struct Library *)malloc(sizeof(struct Library));
    lib->book_size = 0;
    lib->student_size = 0;
    lib->book = (struct Book **)malloc(1000 * sizeof(struct Book *));
    lib->students = (struct Student **)malloc(1000 * sizeof(struct Student *));

    char book_name[1000];
    int id;
    int book_id;
    int student_id;
    char student_name[1000];

    int choice;


    printf("\n***Library managment system***\n");

    do {
        printf("\nLibrary Menu:\n");
        printf("1: Add Book\n");
        printf("2: Remove Book\n");
        printf("3: Issue Book\n");
        printf("4: Return Book\n");
        printf("5: Add Student\n");
        printf("6: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a Book name: ");
                scanf("%s", book_name);
                printf("Enter an ID for the book: ");
                scanf("%d", &id);
                struct Book *new_book = Add(book_name, id);
                lib->book[(lib->book_size)++] = new_book;
                break;

            case 2:
                printf("Enter the ID of the book to remove: ");
                scanf("%d", &id);
                remove_Book(lib, id);
                break;

            case 3:
                printf("Enter the Book ID to issue: ");
                scanf("%d", &book_id);
                printf("Enter the Student ID: ");
                scanf("%d", &student_id);
                issue_Book(lib, book_id, student_id);
                break;

            case 4:
                printf("Enter the Book ID to return: ");
                scanf("%d", &book_id);
                return_Book(lib, book_id);
                break;

            case 5:
                printf("Enter a Student name: ");
                scanf("%s", student_name);
                printf("Enter the Student ID: ");
                scanf("%d", &id);
                struct Student *new_student = Add_student(student_name, id);
                lib->students[(lib->student_size)++] = new_student;
                break;

            case 6:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (choice != 6);
    return 0;
}
