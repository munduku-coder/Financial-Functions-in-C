#include <stdio.h>
#include <math.h>

    // 5.Question number five: Calculate Monthly Loan Payment
    void calculateLoanPayment() {
    float P, r, n, M;
    printf("\nEnter the loan amount (UGX): ");
    scanf("%f", &P);
    printf("\nEnter the annual interest rate (percentage): ");
    scanf("%f", &r);
    printf("\nEnter the loan term (in years): ");
    scanf("%f", &n);
    r = (r / 100) / 12;
    n *= 12;
    M = (P * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);
    printf("\nThe monthly loan payment is: UGX %.2f\n", M);}
    //Question number six: Simple Interest Calculation
    void calculateSimpleInterest() {
    float P, R, T, SI;
    printf("\nEnter the principal amount (UGX): ");
    scanf("%f", &P);
    printf("\nEnter the annual interest rate (percentage): ");
    scanf("%f", &R);
    printf("\nEnter the time (in years): ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    printf("\nThe simple interest is: UGX %.2f\n", SI);}
    //Question number seven: Break-Even Point calculation
    void calculateBreakEvenPoint() {
    float fixed_costs, variable_cost, price_per_unit, break_even;
    printf("\nEnter the fixed costs (UGX): ");
    scanf("%f", &fixed_costs);
    printf("\nEnter the variable cost per unit (UGX): ");
    scanf("%f", &variable_cost);
    printf("\nEnter the selling price per unit (UGX): ");
    scanf("%f", &price_per_unit);
    break_even = fixed_costs / (price_per_unit - variable_cost);
    printf("\nThe break-even point is: %.2f units\n", break_even);}
    //Question number eight: Flat Interest calculation
    void calculateFlatInterest() {
    float investment, rate, time, flat_interest;
    printf("\nEnter the investment amount (UGX): ");
    scanf("%f", &investment);
    printf("\nEnter the annual interest rate (percentage): ");
    scanf("%f", &rate);
    printf("\nEnter the time (in years): ");
    scanf("%f", &time);
    flat_interest = investment * time * (rate / 100);
    printf("\nThe flat interest is: UGX %.2f\n", flat_interest);}
    int main() {
    printf("Group 2: Questions 5-8\n");
    calculateLoanPayment();
    calculateSimpleInterest();
    calculateBreakEvenPoint();
    calculateFlatInterest();
    return 0;
}
