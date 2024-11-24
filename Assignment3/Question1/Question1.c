#include <stdio.h>
#include <string.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Employee {
    int employeeCode;
    char employeeName[20];
    struct Date dateOfJoining;
};

struct Employee employees[4];
int employee_count = 0;

void check_tenure(struct Employee*);
int employee_data();


int main (){
    while(employee_count < 4){
        employee_data();
    }
   check_tenure(employees);

    return 0;
}


int employee_data(){
    if (employee_count == 4){
        printf("List Full!\n");
        return 0;
    }
    printf("Enter Employee Code: ");
    scanf(" %d", &employees[employee_count].employeeCode);
    printf("Enter Employee Name: ");
    getchar();
    fgets(employees[employee_count].employeeName, 
    sizeof(employees[employee_count].employeeName), stdin);
    employees[employee_count].employeeName[
    strcspn(employees[employee_count].employeeName, "\n")] = '\0';
    printf("Enter Date of Joining (Day Month Year): ");
    scanf("%d %d %d", &employees[employee_count].dateOfJoining.day,
    &employees[employee_count].dateOfJoining.month,
    &employees[employee_count].dateOfJoining.year);
    printf("\nEmployee %d Added\n", employee_count+1);
    printf("\n");
    employee_count++;
    return 0;
}

void check_tenure(struct Employee* employees){
    static int tenure_count = 0;
    struct Date current_date = {18, 11, 2024};
    int diff_in_year;
    for (int i = 0; i < employee_count; i++){
        diff_in_year = current_date.year - 
        employees[i].dateOfJoining.year;
        if (diff_in_year > 3){
            printf("\nEmployee Code: %d\n"
            "Employee Name: %s\n"
            "Date of Joining: %d/%d/%d\n", employees[i].employeeCode,
            employees[i].employeeName, employees[i].dateOfJoining.day,
            employees[i].dateOfJoining.month,
            employees[i].dateOfJoining.year);
            tenure_count++;
        }
    }
    printf("\nNumber of Employees over 3 years: %d\n", tenure_count);
}