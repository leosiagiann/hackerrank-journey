#include <bits/stdc++.h>
using namespace std;

map<string, string> divideHtml(vector<string> a)
{
    map<string, string> list;
    string first = "";
    for (int i = 0; i < a.size() / 2; i++)
    {
        string realTimeAddProperties;
        a.at(i).erase(a.at(i).begin() + 0);
        a.at(i).erase(a.at(i).begin() + a.at(i).size() - 1);
        stringstream s(a.at(i));
        string str;
        vector<string> strList;
        while (getline(s, str, ' '))
        {
            strList.push_back(str);
        }
        // for(int j = 0 ; j < strList.size() ; j++){
        //     cout<<strList.at(j)<<" ";
        // }
        // cout<<endl;
        string properties = first;
        properties += strList.at(0);
        realTimeAddProperties = strList.at(0) + ".";
        properties += "~";
        strList.erase(strList.begin() + 0);
        for (int j = 0; j < strList.size(); j++)
        {
            stringstream s2(strList.at(j));
            string str2;
            int i = 1;
            string tempProperties = properties;
            while (getline(s2, str2, '='))
            {
                if (i == 1)
                {
                    tempProperties += str2;
                }
                else
                {
                    str2.erase(str2.begin() + 0);
                    str2.erase(str2.begin() + str2.size() - 1);
                    list.insert(pair<string, string>(tempProperties, str2));
                    // cout<<str2<<endl;
                }
                i++;
            }
        }
        first += realTimeAddProperties;
    }
    return list;
}

void showResult(map<string, string> list, vector<string> toShow)
{
    for (int i = 0; i < toShow.size(); i++)
    {
        string temp = list[toShow.at(i)];
        (temp == "") ? cout << "Not Found!\n" : cout << temp << endl;
    }
}

vector<string> removeSpace(vector<string> html)
{
    for (int i = 0; i < html.size(); i++)
    {
        for (int j = 0; j < html.at(i).size(); j++)
        {
            if (html.at(i).at(j) == '=')
            {
                if (html.at(i).at(j - 1) == ' ')
                {
                    html.at(i).erase(html.at(i).begin() + j - 1);
                    j--;
                }
                if (html.at(i).at(j + 1) == ' ')
                {
                    html.at(i).erase(html.at(i).begin() + j + 1);
                }
            }
        }
    }
    return html;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    vector<string> html;
    vector<string> call;
    cin.ignore();
    for (int i = 0; i < a; i++)
    {
        string str;
        getline(cin, str);
        html.push_back(str);
    }
    for (int i = 0; i < b; i++)
    {
        string str;
        getline(cin, str);
        call.push_back(str);
    }
    html = removeSpace(html);
    map<string, string> list;
    list = divideHtml(html);
    showResult(list, call);
    // for(int i = 0 ; i < a ; i++){
    //     cout<<html.at(i)<<endl;
    // }
    return 0;
}
