#include <stdio.h>
//it is also called as ternary operator
//one line statement of if-else

int main()
{
    int age;
    printf("Enter the value of age: ");
    scanf("%d",&age);
    (age>=18)?printf("can cast vote"):printf("cannot cast vote");

}