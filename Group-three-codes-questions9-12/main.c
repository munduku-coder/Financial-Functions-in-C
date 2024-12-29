#include <stdio.h>

    //Question number nine: Profit Margin
    void calculateProfitMargin() {
    float sales_revenue, profit, profit_margin;
    printf("\nEnter the sales revenue (UGX): ");
    scanf("%f", &sales_revenue);
    printf("\nEnter the profit (UGX): ");
    scanf("%f", &profit);
    profit_margin = (profit / sales_revenue) * 100;
    printf("\nThe profit margin is: %.2f%%\n", profit_margin);}
    //Question number ten: Depreciation
    void calculateDepreciation() {
    float cost, residual_value, depreciation;
    int years;
    printf("\nEnter the cost of the asset (UGX): ");
    scanf("%f", &cost);
    printf("\nEnter the residual value of the asset (UGX): ");
    scanf("%f", &residual_value);
    printf("\nEnter the useful life of the asset (in years): ");
    scanf("%d", &years);
    depreciation = (cost - residual_value) / years;
    printf("\nThe annual depreciation is: UGX %.2f\n", depreciation);}
    int main() {
    printf("Group 3: Questions 9-10\n");
    calculateProfitMargin();
    calculateDepreciation();

    return 0;
}
