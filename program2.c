#include <stdio.h>


int main() {
    char name[20];
    int day;
    int month;
    int year;
    char city[20];

    printf("Enter your name ");
    scanf("%s", name);
    printf("Enter your birth day ");
    scanf("%d", &day);
    printf("Enter your birth month ");
    scanf("%d", &month);
    printf("Enter your birth year ");
    scanf("%d", &year);
    printf("Enter your hometown name ");
    scanf("%s", city);

    printf("Now we're familiar \n Your name is %s \n your birth date is %d.%d.%d \n you are from %s",name,day,month,year,city);


    

    return 0;





}