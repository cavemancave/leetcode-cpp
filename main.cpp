#include <iostream>
#include "common.h"

class Solution {
public:
vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            // not found the second one
            if (m.find(numbers[i])==m.end() ) { 
                // store the first one position into the second one"s key
                m[target - numbers[i]] = i; 
            }else { 
                // found the second one
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};


int main(int, char**){
    json j;
    ifstream jfile("1.json");
    jfile>>j;
    Solution s;
    int caseIdx = 0;
    for(auto it:j){
        int target = it.at("target").get<int>();
        vector<int> nums = it.at("nums").get<vector<int>>();
        vector<int> answer = it.at("answer").get<vector<int>>();
        vector<int> result = s.twoSum(nums, target);
        bool eq = equal(answer.begin(), answer.end(), result.begin());
        if(!eq)
        {
            cout<< "Failed case " << caseIdx << endl;
            cout << "nums:";
            CoutVector(nums);
            cout << "target:" << target << std::endl;
            cout << "result:";
            CoutVector(result);
            return 1;
        }else{
            cout << "Passed case "<<caseIdx<<endl;
        }
        caseIdx++;
    }
    return 0;
}
