//Grading Students
//https://www.hackerrank.com/challenges/grading/problem
int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
 
    int *result = malloc(grades_count * sizeof(int));
 
    for (int i = 0; i < grades_count; i++) {
        int grade = grades[i];
        int diff = 5 - (grade % 5);
 
        if (grade >= 38 && diff < 3) {
            grade = grade + diff;
        }
 
        result[i] = grade;
    }
 
    return result;
}
