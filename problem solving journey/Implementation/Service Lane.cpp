#include <bits/stdc++.h>

using namespace std;

vector<int> serviceLane(vector<vector<int>> cases, vector<int> width) {
    vector<int> result;
    int min;
    for(int i = 0 ; i < cases.size() ; i++){
        min = *min_element(width.begin()+cases.at(i).at(0), width.begin()+cases.at(i).at(1)+1);
        result.push_back(min);
    }
    return result;
}

int main(){
    int n, t, w, c1, c2;
    cin>>n>>t;
    vector<int> width;
    vector<vector<int>> cases;
    vector<int> case_;
    for(int i = 0 ; i < n ; i++){
        cin>>w;
        width.push_back(w);
    }
    for(int i = 0 ; i < t ; i++){
        cin>>c1>>c2;
        case_.push_back(c1);
        case_.push_back(c2);
        cases.push_back(case_);
        case_.clear();
    }
    vector<int> result = serviceLane(cases, width);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result.at(i)<<endl;
    }
    return 0;
}