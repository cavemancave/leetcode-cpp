#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;


void CoutVector(const vector<int>& nums)
{
    cout<<'[';
    for(int i:nums){
        cout << i << ',';
    }
    cout << ']' << std::endl;
}

