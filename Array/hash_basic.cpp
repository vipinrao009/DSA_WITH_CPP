#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an unordered_map
    unordered_map<int, string> hash;

    // ✅ INSERT
    hash[1] = "one";           // Method 1: Using []
    hash.insert({2, "two"});   // Method 2: Using insert
    hash[3] = "three";
    hash[4] ="four";
    // ✅ ACCESS
    cout << "Accessing key 2: " << hash[2] << endl;

    // ✅ PRINT all elements
    cout << "\nAll key-value pairs:\n";
    for (auto it : hash) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    // ✅ DELETE
    hash.erase(2); // Deletes key 2

    // ✅ CHECK IF KEY EXISTS
    if (hash.find(2) == hash.end()) {
        cout << "\nKey 2 not found (deleted successfully)" << endl;
    } else {
        cout << "\nKey 2 still exists" << endl;
    }

    return 0;
}
