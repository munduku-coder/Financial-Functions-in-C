
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
//Question number three: Calculate Gross Profit
    void calculateGrossProfit() {
    float sales_revenue, cogs, gross_profit;
    printf("\nEnter the sales revenue (UGX): ");
    scanf("%f", &sales_revenue);
    printf("\nEnter the cost of goods sold (COGS) (UGX): ");
    scanf("%f", &cogs);
    gross_profit = sales_revenue - cogs;
    printf("\nThe gross profit is: UGX %.2f\n", gross_profit);}
    //Question number four: Calculate ROI
    void calculateROI() {
    float investment, earnings, roi;
    printf("\nEnter the total investment (UGX): ");
    scanf("%f", &investment);
    printf("\nEnter the total earnings from the investment (UGX): ");
    scanf("%f", &earnings);
    roi = ((earnings - investment) / investment) * 100;
    printf("\nThe ROI is: %.2f%%\n", roi);}
    int main() {
    printf("Group 1: Questions 1-4\n");
    calculateSalePrice();
    calculateFinalSalary();
    calculateGrossProfit();
    calculateROI();
    return 0;}
