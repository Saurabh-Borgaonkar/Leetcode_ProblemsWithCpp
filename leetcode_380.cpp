#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
using namespace std;

class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> mp;

    RandomizedSet() {
    }

    bool insert(int val) {
        // Already exists
        if (mp.find(val) != mp.end()) {
            return false;
        }

        nums.push_back(val);
        mp[val] = nums.size() - 1;

        return true;
    }

    bool remove(int val) {
        // Doesn't exist
        if (mp.find(val) == mp.end()) {
            return false;
        }

        int index = mp[val];
        int last = nums.back();

        // Put last element at deleted element's position
        nums[index] = last;
        mp[last] = index;

        // Remove last element
        nums.pop_back();

        // Remove from map
        mp.erase(val);

        return true;
    }

    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};

int main() {

    RandomizedSet obj;

    cout << obj.insert(10) << endl; // 1
    cout << obj.insert(20) << endl; // 1
    cout << obj.insert(10) << endl; // 0

    cout << obj.remove(10) << endl; // 1
    cout << obj.remove(30) << endl; // 0

    cout << "Random element: "
         << obj.getRandom() << endl;

    return 0;
}