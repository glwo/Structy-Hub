#include <unordered_map>
#include <unordered_set>
#include <vector>
​
int explore(std::unordered_map<int, std::vector<int>> graph, int currentNode, std::unordered_set<int> &visited) {
  if(visited.count(currentNode) > 0){
    return 0;
  }
  
  visited.insert(currentNode);
  
  int size = 1;
  
  for(int neighbor : graph[currentNode]) {
    size += explore(graph, neighbor, visited);
  }
  return size;
}
​
int largestComponent(std::unordered_map<int, std::vector<int>> graph) {
  // todo
  std::unordered_set<int> visited;
  int largest = 0;
  for(auto pair : graph){
    int size = explore(graph, pair.first, visited);
    if(size > largest) {
      largest = size;
    }
  }
  return largest;
}
​
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}