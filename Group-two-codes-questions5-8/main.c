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
    printf("\nThe simple interest is: UGX %.2f\n", SI);
}

