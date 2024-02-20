#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string nextPalindrome(string time) {
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    string hourStr, minuteStr, reversedMinuteStr, str;
    while (true) {
        minute++;
        if (minute == 60) {
            minute = 0;
            hour++;
            if (hour == 24) 
                hour = 0;
        }
        if (hour == 0)
            str = to_string(minute);
        else
            str = to_string(hour) + ((minute < 10) ? "0" + to_string(minute) : to_string(minute));
        hourStr = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
        minuteStr = (minute < 10) ? "0" + to_string(minute) : to_string(minute);
        reversedMinuteStr = str;
        reverse(reversedMinuteStr.begin(), reversedMinuteStr.end());
        if (reversedMinuteStr == str)
            return hourStr + ":" + minuteStr;
    }
}

int main() {
    int testCases;
    cin >> testCases;
    string time;
    for (int i = 0; i < testCases; i++) {
        cin >> time;
        cout << nextPalindrome(time) << endl;
    }
}