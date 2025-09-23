#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the length of three sides of Triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a+b>c && a+c>b && b+c>a){
        if (a==b && b==c){
            printf("The Triangle is Equilateral triangle.\n");
        }
        else if (a==b || b==c || a==c){
        
            printf("The Triangle is Isosceles triangle.\n");
        }
        else{
            printf("The Triangle is Scaler triangle.\n");
        }
    }
    else{
            printf("Entered side lengths do not form a triangle.\n");
        }
    return 0;
}