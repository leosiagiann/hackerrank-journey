#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */
bool allEmpty(string b){
    for(int i = 0 ; i < b.size() ; i++){
        if(b[i] != '_'){
            return false;
        }
    }
    return true;
}

bool noEmpty(string b){
    for(int i = 0 ; i < b.size() ; i++){
        if(b[i] == '_'){
            return false;
        }
    }
    return true;
}

string removeEmpty(string b){
    for(int i = 0 ; i < b.size() ; i++){
        if(b[i] == '_'){
            b.erase(i, 1);
            i--;
        }
    }
    return b;
}

string checkBalance(string b){
    for(int i = 0 ; i < b.size() ; i++){
        int m = i + 1;
        for(int j = m ; b.size() ; j++){
            if(b[i] != b[j]){
                m = j-1;
                break;
            }
        }
        if(m - i < 1){
            return "NO";
        }
        i = m;
    }
    return "YES";
}

string checkTotal(string b){
    int count = 0;
    for(int i = 0 ; i < b.size() ; i++){
        for(int j = i + 1 ; j < b.size() ; j++){
            if(b[i] == b[j]){
                count++;
                b.erase(j, 1);
                j--;
            }
        }
        if(count > 0){
            count = 0;
            continue;
        } else{
            return "NO";
        }
    }
    return "YES";
}

string happyLadybugs(string b) {
    if(allEmpty(b)){
        return "YES";
    }else if(noEmpty(b)){
        return checkBalance(b);
    }else{
        b = removeEmpty(b);
        return checkTotal(b);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

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