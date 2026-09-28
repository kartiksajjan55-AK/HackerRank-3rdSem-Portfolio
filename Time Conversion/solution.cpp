string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    if (s[8] == 'A') {
        if (hour == 12)
            hour = 0;
    }
    else {
        if (hour != 12)
            hour += 12;
    }

    string h = to_string(hour);

    if (hour < 10)
        h = "0" + h;

    return h + s.substr(2, 6);
}
