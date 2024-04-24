#include <stdio.h>
 
int main()
{
    int age;
    printf("Enter Your Age \n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if(age>=18) {
        printf("You can Vote");
    }
    else if(age>10) {printf("You can vote too if you want");
    }
    else {printf("you cannot vote");}
    return 0;
}
