#include <bits/stdc++.h> // Include every standard library header (GCC specific convenience header)
using namespace std; // Bring all names from the std namespace into the global namespace for brevity

// Print numbers from 1 to n ---------------------------------------------------
void print_ONETON(int n){
    cout << "print  ONE TO N " << endl; // Header indicating what will be printed
    for(int i = 1 ; i <= n; i++){ // Loop from 1 up to and including n
        cout << i << ","; // Output the current number followed by a comma
    }
    cout << endl; // Finish the line after the loop
}

// Print even numbers from 1 to n --------------------------------------------
void print_even_ONETON(int n){
    cout << "print even ONE TO N " << endl; // Header for even numbers
    for(int i = 1 ; i <= n; i++){
        if(i % 2 == 0){ // Check if i is divisible by 2 (i.e., even)
            cout << i << ","; // Output the even number
        }
    }
    // No explicit newline here; the caller may add one if desired
}

// Print odd numbers from 1 to n ---------------------------------------------
void print_odd_ONETON(int n){
    cout << "print even ONE TO N " << endl; // NOTE: Message says "even" but the function prints odd numbers
    for(int i = 1 ; i <= n; i++){
        if(i % 2 != 0){ // Check if i is not divisible by 2 (i.e., odd)
            cout << i << ","; // Output the odd number
        }
    }
    // No explicit newline here either
}

// Print multiplication table for n (n × 1 … n × 10) --------------------------
void print_table(int n){
    for(int i = 1 ; i <= 10 ; i++){
        cout << n << "X" << i << "=" << i * n << endl; // Show each row of the table
    }
}

// Print the sum of the integers from 1 to n ---------------------------------
void printSum(int n){
    int s = 0; // Accumulator for the sum
    for(int i = 1 ; i <= n; i++){
        s = s + i; // Add each i to the running total
    }
    cout << s << endl; // Output the final sum
}

// Print n! (factorial of n) --------------------------------------------------
void printFactorial(int n){
    long long fact = 1; // Use 64‑bit integer to hold larger results
    for(int i = 1 ; i <= n; i++){
        fact = fact * i; // Multiply successive integers
    }
    cout << fact << endl; // Output the factorial value
}

// Print the first n Fibonacci numbers (starting with 0, 1) -----------------
void printfIBONACCI(int n){
    long long t1 = 0, t2 = 1, nxt = 0; // t1 = F0, t2 = F1, nxt will hold subsequent terms
    for(int i = 1 ; i <= n; i++){
        if(i == 1){
            cout << t1 << ","; // First term (0)
            continue; // Skip the rest of the loop body
        }
        if(i == 2){
            cout << t2 << ","; // Second term (1)
            continue;
        }
        nxt = t1 + t2; // Compute next Fibonacci number
        t1 = t2; // Shift previous terms forward
        t2 = nxt;
        cout << nxt << ","; // Output the newly computed term
    }
    cout << endl; // End the line after printing all terms
}

// Print all proper factors of n (excluding n itself) -----------------------
void printALLfACTORS(int n){
    for(int i = 1; i < n; i++){
        if(n % i == 0){ // i divides n without remainder
            cout << i << ","; // Output the factor
        }
    }
    cout << endl; // Finish the line after listing factors
}

int main(){
    int n = 5; // Example input value used for most functions
    print_ONETON(n);
    print_even_ONETON(n);
    print_odd_ONETON(n);
    print_table(n);
    printSum(n);
    printFactorial(n);
    printfIBONACCI(n);
    printALLfACTORS(12); // Demonstrate factor printing with a different argument
    return 0; // Indicate successful program termination
}

