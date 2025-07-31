#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    // Previous Code
    /*
    string year_str = to_string(year);
    if (year < 1918)
    {
        if (year % 4 == 0) return "12.09."  + year_str;
        return "13.09." + year_str;
    }
    if (year > 1918)
    {
        if (year % 4 == 0) 
        {
            if(year % 100 == 0 && year % 400 != 0) return "13.09."  + year_str;
            return "12.09."  + year_str;
        }
        return "13.09." + year_str;
    }
    */
    
    if(year == 1918) return "26.09.1918";
    
    string year_str = to_string(year);
    if (year % 4 == 0) 
    {
        if (year < 1918) return "12.09."  + year_str;
        if(year % 100 == 0 && year % 400 != 0) return "13.09."  + year_str;
        return "12.09."  + year_str;
    }
    else return "13.09." + year_str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

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
