#include <stdio.h>

#define STUDENT 3
#define EXAMS 4

void printArr(const int grades[][EXAMS], int pupils, int tests);
int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);

int main() {
	int student;
	const int studentGrades[STUDENT][EXAMS] = {
		{77,68,86,73},{96,87,89,78},{70,90,86,81}
	};

	puts("The array is:");
	printArr(studentGrades, STUDENT, EXAMS);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimum(studentGrades, STUDENT, EXAMS),
		maximum(studentGrades, STUDENT, EXAMS));

	for (student = 0; student < STUDENT; student++)
		printf("The average grade for students %d is %.2f\n",
			student, average(studentGrades[student], EXAMS));

	return 0;
}

void printArr(const int grades[][EXAMS], int pupils, int tests) {
	printf("%16s[0]\t[1]\t[2]\t[3]", "");

	for (int i = 0; i < pupils; i++) {
		printf("\nstudentGrades[%d]", i);
		for (int j = 0; j < tests; j++)
			printf("%-3d\t", grades[i][j]);
	}
}

int minimum(const int grades[][EXAMS], int pupils, int tests) {
	int lowestGrade = 1000;

	for (int i = 0; i < pupils; i++) {
		for (int j = 0; j < tests; j++) {
			if (grades[i][j] < lowestGrade)
				lowestGrade = grades[i][j];
		}
	}

	return lowestGrade;
}

int maximum(const int grades[][EXAMS], int pupils, int tests) {
	int highestGrade = 0;

	for (int i = 0; i < pupils; i++) {
		for (int j = 0; j < tests; j++) {
			if (grades[i][j] > highestGrade)
				highestGrade = grades[i][j];
		}
	}

	return highestGrade;
}

double average(const int setOfGrades[], int tests) {
	int total = 0;

	for (int i = 0; i < tests; i++)
		total += setOfGrades[i];

	return (double)total / tests;
}
