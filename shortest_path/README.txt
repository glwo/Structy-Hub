Write a function, shortestPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB). The function should return the length of the shortest path between A and B. Consider the length as the number of edges in the path, not the number of nodes. If there is no path between A and B, then return -1.

test_00

std::vector<std::tuple<std::string, std::string>> edges {
  {"w", "x"},
  {"x", "y"},
  {"z", "y"},
  {"z", "v"},
  {"w", "v"}
};
shortestPath(edges, "w", "z"); // -> 2

test_01

std::vector<std::tuple<std::string, std::string>> edges {
  {"w", "x"},
  {"x", "y"},
  {"z", "y"},
  {"z", "v"},
  {"w", "v"}
};
shortestPath(edges, "y", "x"); // -> 1

test_02

std::vector<std::tuple<std::string, std::string>> edges {
  {"a", "c"},
  {"a", "b"},
  {"c", "b"},
  {"c", "d"},
  {"b", "d"},
  {"e", "d"},
  {"g", "f"}
};
shortestPath(edges, "a", "e"); // -> 3

test_03

std::vector<std::tuple<std::string, std::string>> edges {
  {"a", "c"},
  {"a", "b"},
  {"c", "b"},
  {"c", "d"},
  {"b", "d"},
  {"e", "d"},
  {"g", "f"}
};
shortestPath(edges, "e", "c"); // -> 2

test_04

std::vector<std::tuple<std::string, std::string>> edges {
  {"a", "c"},
  {"a", "b"},
  {"c", "b"},
  {"c", "d"},
  {"b", "d"},
  {"e", "d"},
  {"g", "f"}
};
shortestPath(edges, "b", "g"); // -> -1

test_05

std::vector<std::tuple<std::string, std::string>> edges {
  {"c", "n"},
  {"c", "e"},
  {"c", "s"},
  {"c", "w"},
  {"w", "e"},
};
shortestPath(edges, "w", "e"); // -> 1

test_06

std::vector<std::tuple<std::string, std::string>> edges {
  {"c", "n"},
  {"c", "e"},
  {"c", "s"},
  {"c", "w"},
  {"w", "e"},
};
shortestPath(edges, "n", "e"); // -> 2

test_07

std::vector<std::tuple<std::string, std::string>> edges {
  {"m", "n"},
  {"n", "o"},
  {"o", "p"},
  {"p", "q"},
  {"t", "o"},
  {"r", "q"},
  {"r", "s"}
};
shortestPath(edges, "m", "s"); // -> 6