Write a function, undirectedPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB). The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.

test_00

std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
};

undirectedPath(edges, "j", "m"); // -> 1 (true)

test_01

std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
};

undirectedPath(edges, "m", "j"); // -> 1 (true)

test_02

std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
};

undirectedPath(edges, "l", "j"); // -> 1 (true)

test_03

std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
};

undirectedPath(edges, "k", "o"); // -> 0 (false)

test_04

std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
};

undirectedPath(edges, "i", "o"); // -> 0 (false)

test_05

std::vector<std::tuple<std::string, std::string>> edges {
  {"b", "a"},
  {"c", "a"},
  {"b", "c"},
  {"q", "r"},
  {"q", "s"},
  {"q", "u"},
  {"q", "t"}
};


undirectedPath(edges, "a", "b"); // -> 1 (true)

test_06

std::vector<std::tuple<std::string, std::string>> edges {
  {"b", "a"},
  {"c", "a"},
  {"b", "c"},
  {"q", "r"},
  {"q", "s"},
  {"q", "u"},
  {"q", "t"}
};

undirectedPath(edges, "a", "c"); // -> 1 (true)

test_07

std::vector<std::tuple<std::string, std::string>> edges {
  {"b", "a"},
  {"c", "a"},
  {"b", "c"},
  {"q", "r"},
  {"q", "s"},
  {"q", "u"},
  {"q", "t"}
};

undirectedPath(edges, "r", "t"); // -> 1 (true)

test_08

std::vector<std::tuple<std::string, std::string>> edges {
  {"b", "a"},
  {"c", "a"},
  {"b", "c"},
  {"q", "r"},
  {"q", "s"},
  {"q", "u"},
  {"q", "t"}
};

undirectedPath(edges, "r", "b"); // -> 0 (false)

test_09

std::vector<std::tuple<std::string, std::string>> edges {
  {"s", "r"},
  {"t", "q"},
  {"q", "r"}
};

undirectedPath(edges, "r", "t"); // -> 1 (true)