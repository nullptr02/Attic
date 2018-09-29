#include <stdio.h>

/*=========================================================== |
| File Name: Q3.c
| Developer: nullptr02
| Purpose: Assignment #1
| Question: #3
| Date: June 12/17
| Professor: Lilatul Ferdouse
|
|
| Revision History:
| Date        Name          Revision
| ---------- ------------- ------------------------------- |
| N/A         N/A           N/A
|===========================================================*/


int main() {
    float numberOfHoursWorked;
    float hourlyRate;
    float totalSalary = 0;
    float timeAndHalfSalary = 0;


    while (numberOfHoursWorked != 0) {

        printf("Enter # of hours worked ( 0 to end ): ");
        scanf("%f", &numberOfHoursWorked);


        if (numberOfHoursWorked != 0 && numberOfHoursWorked <= 40) {

            printf("Enter hourly rate of worker ($00.00): ");
            scanf("%f", &hourlyRate);
            totalSalary = numberOfHoursWorked * hourlyRate;
            printf("Salary is %.2f\n\n", totalSalary);

        } else if (numberOfHoursWorked != 0 && numberOfHoursWorked > 40) {

            printf("Enter hourly rate of worker ($00.00): ");
            scanf("%f", &hourlyRate);

            timeAndHalfSalary = numberOfHoursWorked - 40;
            timeAndHalfSalary = (timeAndHalfSalary * hourlyRate) * 1.50;
            timeAndHalfSalary = timeAndHalfSalary + (40 * hourlyRate);

            printf("Salary is %.2f\n\n", timeAndHalfSalary);

        }

    }

    return 0;
}