#include <stdio.h>
#include <math.h>

    //Question 13: Calculate Total Salary After Bonus
    float calculateTotalSalaryWithBonus() {
    float base_salary, bonus_rate;
    printf("\nEnter the base salary (UGX): ");
    scanf("%f", &base_salary);
    printf("\nEnter the bonus rate: ");
    scanf("%f", &bonus_rate);
    return base_salary + (base_salary * bonus_rate);}
    //Question 14: Calculate Profit or Loss
    float calculateProfitOrLoss() {
    float selling_price, cost_price;
    printf("\nEnter the selling price (UGX): ");
    scanf("%f", &selling_price);
    printf("\nEnter the cost price (UGX): ");
    scanf("%f", &cost_price);
    return selling_price - cost_price;}
