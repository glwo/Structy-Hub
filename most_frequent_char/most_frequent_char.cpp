#include <string>
#include <iostream>
#include <unordered_map>
​
char mostFrequentChar(std::string s) {
  // todo
  char freqChar;
  int mostCount = 0;
  std::unordered_map<char, int> charToIntMap;
  
  for(auto& c : s){
    if(charToIntMap[c]){
      charToIntMap[c]++;
    } else {
      charToIntMap[c] = 1;
    }
  }
  
  for(auto& c : s){
    if(charToIntMap[c] > mostCount){
      freqChar = c;
      mostCount = charToIntMap[c];
    }
  }
  return freqChar;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}