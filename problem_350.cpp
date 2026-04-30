#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n, m;

    // Take size of first array
    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> nums1(n);

    // Input elements of first array
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++){
        cin >> nums1[i];
    }

    // Take size of second array
    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> nums2(m);

    // Input elements of second array
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }

    // Create a set from first array (removes duplicates automatically)
    set<int> s(nums1.begin(), nums1.end());

    vector<int> result;

    // Traverse second array and check intersection
    for(int x : nums2){
        if(s.find(x) != s.end()){
            result.push_back(x);
            s.erase(x); // remove element to keep result unique
        }
    }

    // Print intersection result
    cout << "Intersection elements are: ";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}