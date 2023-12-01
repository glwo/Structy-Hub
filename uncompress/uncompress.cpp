#include <string>
#include <cctype>
#include <iostream>
​
std::string uncompress(std::string s) {
  // todo
   int l = 0;
    int r = 0;
    std::string newStr = "";
​
    while (r < s.length()) {
        std::string num = "";
        while (isdigit(s[r])) {
            num += s[r];
            r++;
        }
​
        std::cout << num << std::endl;
​
        int currInt = std::stoi(num);
        for (int i = 0; i < currInt; i++) {
            newStr += s[r];
        }
​
        l = r + 1;
        r++;
    }
​
    return newStr;
}
​
​
void run() {
    uncompress("2c3a1t");
}
​