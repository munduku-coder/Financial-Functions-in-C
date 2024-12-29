    #include <stdio.h>
    //Question number nine: Calculate Profit Margin
    void calculateProfitMargin() {
    float sales_revenue, profit, profit_margin;
    printf("\nEnter the sales revenue: UGX ");
    scanf("%f", &sales_revenue);
    printf("\nEnter the profit: UGX ");
    scanf("%f", &profit);
    profit_margin = (profit / sales_revenue) * 100;
    printf("\nThe profit margin is: %.2f%%\n", profit_margin);}
    //Question number ten: Depreciation
    void calculateDepreciation() {
    float cost, residual_value, useful_life, depreciation;
    printf("\nEnter the cost: UGX ");
    scanf("%f", &cost);
    printf("\nEnter the residual value: UGX ");
    scanf("%f", &residual_value);
    printf("\nEnter the useful life (in years): ");
    scanf("%f", &useful_life);
    depreciation = (cost - residual_value) / useful_life;
    printf("\nThe annual depreciation is: UGX %.2f\n", depreciation);
  } //Question number eleven: Discounted Price
    float getDiscountedPrice(float price, float discount_rate)
  { return price - (price * discount_rate);
  } //Question number twelve: Tax Amount
    float getTaxAmount(float price, float tax_rate)
  { return price * tax_rate; }
    int main()
  { printf("\nGroup 3: Questions 9-12\n");
    calculateProfitMargin();
    calculateDepreciation();
    float price, discount_rate, tax_rate;
    printf("\nEnter the price: UGX ");
    scanf("%f", &price);
    printf("\nEnter the discount rate (as a decimal, e.g., 0.15 for 15%%): ");
    scanf("%f", &discount_rate);
    printf("\nEnter the tax rate (as a decimal, e.g., 0.18 for 18%%): ");
    scanf("%f", &tax_rate);
    printf("\nThe discounted price is: UGX %.2f\n", getDiscountedPrice(price, discount_rate));
    printf("\nThe tax amount is: UGX %.2f\n", getTaxAmount(price, tax_rate));
    return 0; }
