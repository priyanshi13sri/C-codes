#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

typedef struct {
    int scores[MAX_SIZE];
    int size;
} StudentScores;

// Function to calculate average score
double average_score(const StudentScores *students) {
    if (students->size == 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < students->size; i++) {
        sum += students->scores[i];
    }
    return (double)sum / students->size;
}

// Function to find highest and lowest scores
void highest_lowest_scores(const StudentScores *students, int *max_score, int *max_index, int *min_score, int *min_index) {
    if (students->size == 0) return;
    *max_score = INT_MIN;
    *min_score = INT_MAX;
    *max_index = *min_index = -1;
    for (int i = 0; i < students->size; i++) {
        if (students->scores[i] > *max_score) {
            *max_score = students->scores[i];
            *max_index = i;
        }
        if (students->scores[i] < *min_score) {
            *min_score = students->scores[i];
            *min_index = i;
        }
    }
}

// Function to update a score
int update_score(StudentScores *students, int index, int new_score) {
    if (index >= 0 && index < students->size) {
        students->scores[index] = new_score;
        return 1;
    }
    return 0;
}

// Function to remove a score
int remove_score(StudentScores *students, int index) {
    if (index >= 0 && index < students->size) {
        for (int i = index; i < students->size - 1; i++) {
            students->scores[i] = students->scores[i + 1];
        }
        students->size--;
        return 1;
    }
    return 0;
}

// Function to print scores
void print_scores(const StudentScores *students) {
    for (int i = 0; i < students->size; i++) {
        printf("%d ", students->scores[i]);
    }
    printf("\n");
}

// Main function for testing
int main() {
    StudentScores students = {{85, 90, 78, 92, 88}, 5};

    // Task 1: Average Score
    printf("Average Score: %.2f\n", average_score(&students));

    // Task 2: Highest and Lowest Scores
    int max_score, max_index, min_score, min_index;
    highest_lowest_scores(&students, &max_score, &max_index, &min_score, &min_index);
    printf("Highest Score: %d at index %d\n", max_score, max_index);
    printf("Lowest Score: %d at index %d\n", min_score, min_index);

    // Task 3: Update a Score
    if (update_score(&students, 2, 95)) {
        printf("Updated Scores: ");
        print_scores(&students);
    } else {
        printf("Invalid index for update\n");
    }

    // Task 4: Remove a Score
    if (remove_score(&students, 1)) {
        printf("Scores after removal: ");
        print_scores(&students);
    } else {
        printf("Invalid index for removal\n");
    }
    
    return 0;
}
