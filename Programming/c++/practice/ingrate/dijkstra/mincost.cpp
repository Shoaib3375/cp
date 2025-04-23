// #include <bits/stdc++.h>

// using namespace std;

// // Graph represented as adjacency list
// unordered_map<char, vector<pair<char, int>>> graph = {
//     {'A', {{'B', 4}, {'C', 1}}},
//     {'B', {{'C', 2}, {'D', 5}, {'E', 6}}},
//     {'C', {{'D', 10}, {'E', 8}}},
//     {'D', {{'E', 1}, {'Z', 6}}},
//     {'E', {{'Z', 2}}},
//     {'Z', {}}};

// unordered_map<char, int> memo;

// // Recursive function with memoization to find shortest path
// int findMinCost(char current, char end, int depth = 0)
// {
//     // Print recursion tree
//     for (int i = 0; i < depth; i++)
//         cout << "  ";
//     cout << "Exploring " << current << endl;

//     if (current == end)
//         return 0;
//     if (memo.find(current) != memo.end())
//     {
//         for (int i = 0; i < depth; i++)
//             cout << "  ";
//         cout << "Using memoized value for " << current << ": " << memo[current] << endl;
//         return memo[current];
//     }

//     int min_cost = numeric_limits<int>::max();
//     for (auto [neighbor, weight] : graph[current])
//     {
//         int cost = findMinCost(neighbor, end, depth + 1);
//         if (cost != numeric_limits<int>::max())
//         {
//             min_cost = min(min_cost, cost + weight);
//         }
//     }

//     memo[current] = min_cost;

//     for (int i = 0; i < depth; i++)
//         cout << "  ";
//     cout << "Memoizing " << current << " with cost " << min_cost << endl;

//     return min_cost;
// }

// int main()
// {
//     char start = 'A', end = 'Z';
//     int min_cost = findMinCost(start, end);
//     if (min_cost == numeric_limits<int>::max())
//     {
//         cout << "No path exists from " << start << " to " << end << endl;
//     }
//     else
//     {
//         cout << "Minimum cost from " << start << " to " << end << " is: " << min_cost << endl;
//     }
//     return 0;
// }
