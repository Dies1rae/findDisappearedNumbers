#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <Bits.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums);
int main() {
	vector <int> A = {1,1,1,1,1};
	for (auto ptr : findDisappearedNumbers(A)) {
		cout << ptr << ' ';
	}
	return 0;
}
vector<int> findDisappearedNumbers(vector<int>& nums) {
    set<int> t(nums.begin(),nums.end());
    vector<int> r;
    for (auto i = 1; i <= nums.size(); ++i) {
        if (t.find(i) == t.end()) {
            r.push_back(i);
        }
    }
    return r;
}