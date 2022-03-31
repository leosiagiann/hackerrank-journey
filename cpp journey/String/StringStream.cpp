#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function

    // First with String Stream
    vector<int> num;
    stringstream s(str);
    string word;
    while (getline(s, word, ','))
    {
        num.push_back(stoi(word));
    }
    return num;

    // Second Sollution
    // string temp = "";
    // vector<int> num;
    // for(int i = 0 ; i < str.size() ; i++){
    //     if(str[i]!=','){
    //         temp+=str[i];
    //     }else{
    //         num.push_back(stoi(temp));
    //         temp = "";
    //     }
    // }
    // num.push_back(stoi(temp));
    // return num;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}