// q.1 ement a C program to find an average and a grade of a student. Consider 5 subjects. Assign out of 100 marks for each subject. Use conditions for evaluate grades based on average value


#include <stdio.h>

int main() {
        float marks[5], total = 0, average;
        char grade;
    
        
        printf("Enter marks for 5 subjects (out of 100):\n");
        for (int i = 0; i < 5; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%f", &marks[i]);
            
          
            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid input! Marks must be between 0 and 100.\n");
                return 1; 
            }
    
            total += marks[i]; 
        }
    
        average = total / 5;
    
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 80) {
            grade = 'B';
        } else if (average >= 70) {
            grade = 'C';
        } else if (average >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    
        printf("\nTotal Marks: %.2f\n", total);
        printf("Average Marks: %.2f\n", average);
        printf("Grade: %c\n", grade);
    
        return 0;
    }
    
