#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    vector<int> result;
    for(int i = p ; i <= q ; i++){
        long long square = (long long)pow(i, 2);
        string splitNum = to_string(square);
        int length = splitNum.size();
        if(length/2==0){
            if(i == stoi(splitNum)){
                result.push_back(i);
            }
        }else{
            string fNum = splitNum.substr(0, length/2);
            string sNum = splitNum.substr(length/2,length);
            if(i == stoi(fNum)+stoi(sNum)){
                result.push_back(i);
            }
        }
    }
    if(result.size() == 0){
        cout<<"INVALID RANGE";
        return;
    }
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result.at(i)<<" ";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
