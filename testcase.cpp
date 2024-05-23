#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate random test cases
void generateTestCase() {
    // Set random seed
    srand(time(nullptr));

    // Generate number of test cases (1 in this case)
    int numTestCases = rand()%100+1;
    cout << numTestCases << endl;
    for(int i=0;i<numTestCases;i++){
    // Generate size of array (n)
    int n = rand() % 10000 + 1; // Array size ranges from 1 to 10
    cout << n << endl;

    // Generate array elements for arr1
    vector<int> arr1;
    for (int i = 0; i < n; ++i) {
        int randomElement = rand() % 500+1; // Elements range from 0 to 99
        arr1.push_back(randomElement);
    }

    // Print the array arr1
    for (int i = 0; i < n; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Generate array elements for arr2
    vector<int> arr2;
    for (int i = 0; i < n; ++i) {
        int randomElement = rand() % 500+1; // Elements range from 0 to 99
        arr2.push_back(randomElement);
    }

    // Print the array arr2
    for (int i = 0; i < n; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}
}
int main() {
    // Generate and print the test case
    generateTestCase();

    return 0;
}
