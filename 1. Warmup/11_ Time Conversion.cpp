#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[8] == 'A')
    {
        if(s[0] == '1' && s[1] == '2') 
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else 
    {
        short tens = s[0] - 48;
        short ones = s[1] - 48;
        tens = tens*10 + ones + 12;
        if(tens == 24) tens = 12;
        string hour = to_string(tens);
        s[0] = hour[0];
        s[1] = hour[1];
    }
    return s.substr(0,8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
