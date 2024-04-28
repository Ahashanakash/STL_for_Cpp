#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> mySet = {1, 2, 3, 4, 5};

    // Erase a specific element
    mySet.erase(3);

    // Alternatively, you can use an iterator to specify the element to erase
    auto it = mySet.find(4);
    if (it != mySet.end()) {
        mySet.erase(it);
    }

    // Erase a range of elements
    auto start = mySet.begin();
    auto end = mySet.find(2);
    mySet.erase(start, end);

    // Print the remaining elements
    for ( auto element : mySet) {
        cout << element << " ";
    }

    return 0;
}
