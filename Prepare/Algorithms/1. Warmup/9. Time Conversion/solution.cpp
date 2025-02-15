#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minute = s.substr(3, 2);
    string second = s.substr(6, 2);
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }

     // Format the hour to be two digits
     string hourStr = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    
     // Construct the 24-hour format time
     return hourStr + ":" + minute + ":" + second;

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