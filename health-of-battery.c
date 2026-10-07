#include<stdio.h>
void main()

{
    float health;

    printf("Enter battery health percentage: ");
    scanf("%f",&health);

    if(health < 40)
        printf("Battery Status: Critical");
    else if(health <= 65)
        printf("Battery Status: Average");
    else
        printf("Battery Status: Healthy");
  
}
