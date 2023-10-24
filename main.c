#include <stdio.h>
#include <math.h>

    // basically you have tax balance, lets say $100
    // annual saving can be $10
    // tax acc return rate can be %5 so it would be $100 + $10 = $110 *.05
    // years until retirement lets say 30, we need to figure out how much money they would have in 30 years, starting with $100 and annual stays same, tax return rate stays same

int main(void) {
    int Current_Taxable_Account_Balance;
    double Taxable_Account_Annual_Saving; // when we use double we use %lf instead of %d
    double Taxable_Account_Return_Rate;  // Using double for percentage calculation
    int Years_Until_Retirement;
    double money;  // Using double for the result

    // Get user input
    printf("Please enter your Taxable account balance: $");
    scanf("%d", &Current_Taxable_Account_Balance);
    printf("Please enter how much you plan to save yearly: $");
    scanf("%lf", &Taxable_Account_Annual_Saving);
    printf("Please enter your tax return rate percent: ");
    scanf("%lf", &Taxable_Account_Return_Rate);  // Use %lf for double
    printf("Please enter in how many years do you plan on retiring: ");
    scanf("%d", &Years_Until_Retirement);

    // Convert percentage to decimal
    Taxable_Account_Return_Rate /= 100.0;

    // Calculate the future value
    money = Current_Taxable_Account_Balance * pow(1 + Taxable_Account_Return_Rate, Years_Until_Retirement);

    // Display the result
    printf("You will have $%.2lf in %d years.\n", money, Years_Until_Retirement);

    return 0;
}
