#include <bits/stdc++.h>
using namespace std;

// Prints each digit of the number on a new line.
void print_all_digits(int numbers) {
    if (numbers == 0) {
        cout << 0 << endl;
        return;
    }
    numbers = abs(numbers);
    while (numbers != 0) {
        int digits = numbers % 10;
        cout << digits << endl;
        numbers = numbers / 10;
    }
}

// Counts the number of digits in the number.
void count_all_digits(int numbers) {
    if (numbers == 0) {
        cout << 0 << endl;
    }
    numbers = abs(numbers);
    int count = 0;
    while (numbers != 0) {
        count++;
        numbers = numbers / 10;
    }
    cout << count << endl;
}

// Counts even and odd digits in the number.
void number_odd_even_digits_in_numbers(int numbers) {
    int even = 0;
    int odd = 0;
    if (numbers == 0) {
        cout << "the numbers value is zero" << endl;
    }
    while (numbers != 0) {
        int last_digit = numbers % 10;
        if (last_digit % 2 == 0) {
            even++;
        }
        if (last_digit % 2 != 0) {
            odd++;
        }
        numbers = numbers / 10;
    }
    cout << even << endl;
    cout << odd << endl;
}

// Reverses the digits of the number.
void reverse_number(int numbers) {
    int rev_Number = 0;
    while (numbers != 0) {
        int last_digit = numbers % 10;
        rev_Number = rev_Number * 10 + last_digit;
        numbers = numbers / 10;
    }
    cout << rev_Number << endl;
}

// Checks if the number is a palindrome.
void cheak_palindrome(int number) {
    int number_copy = number;
    int rev_Number = 0;
    while (number_copy != 0) {
        int last_digit = number_copy % 10;
        rev_Number = rev_Number * 10 + last_digit;
        number_copy = number_copy / 10;
    }
    if (rev_Number == number) {
        cout << "number is palindrome" << endl;
    } else {
        cout << "number is not palindrome" << endl;
    }
}

// Finds the maximum digit in the number.
void findMaxDigit(int numbers) {
    numbers = abs(numbers);
    if (numbers == 0) {
        cout << "dont enter zero value" << endl;
    }
    int max = 0;
    while (numbers != 0) {
        int last_digit = numbers % 10;
        if (last_digit > max) {
            max = last_digit;
        }
        numbers = numbers / 10;
    }
    cout << max << endl;
}

// Finds the minimum digit in the number.
void findMinDigit(int n) {
    n = abs(n);
    if (n == 0) {
        cout << "dont enter zero value" << endl;
    }
    int min = 9;
    while (n != 0) {
        int ld = n % 10;
        if (ld < min) {
            min = ld;
        }
        n = n / 10;
    }
    cout << min << endl;
}

// (Optional) Calculates the sum of digits of the number.
int findSumofDigits(int numbers) {
    int sum = 0;
    numbers = abs(numbers);
    while (numbers != 0) {
        sum += numbers % 10;
        numbers /= 10;
    }
    cout << sum << endl;
    return sum;
}

int main() {
    /*
    int numbers = 12332;
    cout << "print_all_digits" << endl;
    print_all_digits(numbers);
    cout << "count_all_digits" << endl;
    count_all_digits(numbers);
    cout << "number_odd_even_digits_in_numbers" << endl;
    number_odd_even_digits_in_numbers(numbers);
    cout << "Reverse number" << endl;
    reverse_number(numbers);
    cout << "Cheak the number is Palindrome " << endl;
    int num_2 = 11211;
    cheak_palindrome(num_2);
    */

    int num_3 = 129123;
    findMaxDigit(num_3);
    findMinDigit(num_3);
    findSumofDigits(num_3);

    return 0;
}
