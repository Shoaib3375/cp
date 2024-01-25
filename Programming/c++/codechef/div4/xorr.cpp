#include <iostream>

// Function to calculate the number of Xorry pairs for a given X
int count_xorry_pairs(int X) {
    int count = 0;

    // Loop through all possible pairs (A, B) satisfying the conditions
    for (int A = 0; A <= X; ++A) {
        for (int B = A; B <= X; ++B) {
            if ((A ^ B) == X) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    // Input the number of test cases
    int T;
    std::cin >> T;

    // Process each test case
    for (int i = 0; i < T; ++i) {
        // Input X for the current test case
        int X;
        std::cin >> X;

        // Output the number of Xorry pairs for the current X
        int result = count_xorry_pairs(X);
        std::cout << result << std::endl;
    }

    return 0;
}
