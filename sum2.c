#include <stdio.h>
void summation2() {    

    int number1, number2, sum;
    
    printf("\nEnter two integers for its sum: \n");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
    //return 0;
}
