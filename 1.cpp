#include <iostream>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find a K-sized subset with maximum GCD
void findSubsetWithMaxGCD(int N, int K) {
    // Create an array to store the subset
    int subset[K];

    // Fill the subset with the first K integers
    for (int i = 0; i < K; ++i) {
        subset[i] = i + 1;
    }

    // Find the GCD of all pairs in the subset
    int maxGCD = 0;
    for (int i = 0; i < K; ++i) {
        for (int j = i + 1; j < K; ++j) {
            maxGCD = std::max(maxGCD, gcd(subset[i], subset[j]));
        }
    }

    // Replace the remaining elements in the subset with the maximum GCD
    for (int i = K; i < N; ++i) {
        subset[i % K] = maxGCD;
    }

    // Print the result
    for (int i = 0; i < N; ++i) {
        std::cout << subset[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        findSubsetWithMaxGCD(N, K);
    }

    return 0;
}
