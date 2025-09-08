/*
 * Integer Analyzer Pro
 * A robust integer analysis tool with input validation
 * Author: [Shiwansh bind @pwf-playz]
 * Version: 1.0.0
 * License: MIT
 */

#include <stdio.h>

int main() {
    // Variable declarations
    int a, b;        // Input integers to analyze
    int result;      // Store scanf return value for validation
    char reset;      // Control variable for program loop
    
    // Main program loop - allows repeated execution
    do {
        // Display header
        printf("\n═══════════════════════════════════════\n");
        printf("        INTEGER ANALYZER PRO           \n");
        printf("═══════════════════════════════════════\n\n");
        
        // Input for variable 'a' with validation
        printf("Enter the value for a: ");
        while ((result = scanf("%d", &a)) != 1) {
            printf("Invalid input! Please enter an integer: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        
        // Input for variable 'b' with validation
        printf("Enter the value for b: ");
        while ((result = scanf("%d", &b)) != 1) {
            printf("Invalid input! Please enter an integer: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        
        // Analysis section
        printf("\n──────── ANALYSIS RESULTS ────────\n");
        
        // Check for negative values
        if (a < 0)
            printf("a (%d) is negative\n", a);
        if (b < 0)
            printf("b (%d) is negative\n", b);
        
        // Check for positive values
        if (a > 0 && b > 0)
            printf("Neither value is negative\n");
        
        // Check for zero values
        if (a == 0 && b == 0)
            printf("Both values are zero\n");
        else if (a == 0)
            printf("a is zero\n");
        else if (b == 0)
            printf("b is zero\n");
        
        // Additional analysis
        if (a == b)
            printf("Both values are equal\n");
        if (a > b)
            printf("a (%d) is greater than b (%d)\n", a, b);
        else if (b > a)
            printf("b (%d) is greater than a (%d)\n", b, a);
        
        // Display final values in formatted box
        printf("\n┌────────── FINAL VALUES ──────────┐\n");
        printf("│  a = %-10d  b = %-10d  │\n", a, b);
        printf("│  Sum: %-25d  │\n", a + b);
        printf("│  Difference (a-b): %-11d  │\n", a - b);
        printf("│  Product: %-19d  │\n", a * b);
        if (b != 0)
            printf("│  Quotient (a/b): %.2f%-11s│\n", (float)a/b, "");
        else
            printf("│  Quotient: Division by zero!     │\n");
        printf("└───────────────────────────────────┘\n");
        
        // User continuation prompt
        printf("\nPress 'r' or 'R' to run again, any other key to quit: ");
        while (getchar() != '\n');  // Clear leftover newline
        scanf("%c", &reset);
        
    } while (reset == 'r' || reset == 'R');
    
    // Program termination
    printf("\n═══════════════════════════════════════\n");
    printf("   Thank you for using Integer         \n");
    printf("          Analyzer Pro!                \n");
    printf("═══════════════════════════════════════\n");
    
    return 0;
}