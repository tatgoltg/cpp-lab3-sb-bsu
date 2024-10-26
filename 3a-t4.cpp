#include <iostream>
#include <cmath>

int main() {
int k, i = 1, sum_k = 0, number;
while (true) {
std::cout << "Enter the amount of integers to sum = "; std::cin >> k;
if (k <= 0) { std::cout << "Invalid value. Please, input a positive integer number.\n"; continue; }
break;
}
do {
std::cout << "Enter integer nr. " << i << ": ";
std::cin >> number;
if (std::cin.fail()) { std::cout << "Invalid value. Please input a valid integer number.\n"; std::cin.clear(); std::cin.ignore(10000,'\n'); continue; }
sum_k += number; i++;
} while (i <= k);
std::cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}

