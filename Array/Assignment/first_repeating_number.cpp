#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& a) {
    unordered_map<int, int> hash;
    int n = a.size();

    // Step 1: Count frequency of each number
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }

    // Step 2: Find the first number with count > 1
    for (int i = 0; i < n; i++) {
        if (hash[a[i]] > 1) {
            return a[i];  // duplicate found
        }
    }

    return -1; // if no duplicate found (just in case)
}

int main() {
    vector<int> a = {1, 3, 4, 2, 2};  // Example array
    int duplicate = findDuplicate(a);

    cout << "Duplicate number is: " << duplicate << endl;
    return 0;
}
