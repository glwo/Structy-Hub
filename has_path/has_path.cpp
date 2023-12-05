#include <unordered_map>
#include <vector>
#include <string>
#include <stack>
​
​
bool hasPath(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {
  // todo
  std::stack<std::string> stack;
  stack.push(src);
  
  while(!stack.empty()){
    std::string curr = stack.top();
    stack.pop();
    
    if(curr == dst){
      return true;
    }
    
    for(auto& neighbor : graph[curr]){
      stack.push(neighbor);
    }
  }
  return false;
}
​
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}