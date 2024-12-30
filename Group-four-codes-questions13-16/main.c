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
    //Question 15: Calculate Discounted Price if Above 20%
    float checkDiscountAbove20() {
    float price, discount_rate;
    printf("\nEnter the price (UGX): ");
    scanf("%f", &price);
    printf("\nEnter the discount rate: ");
    scanf("%f", &discount_rate);
    if (discount_rate > 0.2) {
    return price - (price * discount_rate);
    } else {
    printf("\nDiscount rate is not above 20%%.\n");
    return 0;}}
    //Question 16: Calculate Years to Double Investment
    int calculateYearsToDoubleInvestment() {
    float rate;
    printf("\nEnter the annual rate of return (percentage): ");
    scanf("%f", &rate);
    return (int)(log(2) / log(1 + rate / 100));}
    int main() {
    printf("\nGroup 4: Questions 13-16\n");
    float total_salary = calculateTotalSalaryWithBonus();
    printf("\nThe total salary after bonus is: UGX %.2f\n", total_salary);
    float profit_or_loss = calculateProfitOrLoss();
    if (profit_or_loss > 0) {
    printf("\nProfit: UGX %.2f\n", profit_or_loss);
    } else if (profit_or_loss < 0) {
    printf("\nLoss: UGX %.2f\n",profit_or_loss);
    } else {
    printf("\nNo Profit or Loss.\n");}
    float discounted_price = checkDiscountAbove20();
    if (discounted_price > 0) {
    printf("\nDiscounted price is: UGX %.2f\n", discounted_price);}
    int years_to_double = calculateYearsToDoubleInvestment();
    printf("\nYears to double the investment: %d years\n", years_to_double);
    return 0;
}
