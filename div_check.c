#include <stdio.h>
int main(){
    int number;
     printf("Enter an integer: ");
     scanf("%d", &number);

        if(number%5==0 && number%11==0){
             printf("%d is divisible by both 5 an 11.\n",number);
        }
        else if (number%5==0)
        {
            printf("%d is divisible by 5.\n",number);
        }
        else if (number%11==0)
        {
             printf("%d is divisible by 11.\n",number);
        }
        else
        {
             printf("%d is not divisible 5 and 11",number);

        }
        
return 0;
}