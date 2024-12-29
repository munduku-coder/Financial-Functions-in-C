
#include <stdio.h>
    //Questions number one: Total Sale Price Calculation
    void calculateSalePrice() {
    float original_price, discount_rate, sale_price;
    printf("\nEnter the original price (UGX): ");
    scanf("%f", &original_price);
    printf("\nEnter the discount rate: ");
    scanf("%f", &discount_rate);
    sale_price = original_price - (original_price * discount_rate);
    printf("\nThe total sale price is: UGX %.2f\n", sale_price);}
    //Question number two: Calculate Final Salary After Tax
    void calculateFinalSalary() {
    float original_salary, tax_rate, salary_after_tax;
    printf("\nEnter the original salary (UGX): ");
    scanf("%f", &original_salary);
    printf("\nEnter the tax rate: ");
    scanf("%f", &tax_rate);
    salary_after_tax = original_salary - (original_salary * tax_rate);
