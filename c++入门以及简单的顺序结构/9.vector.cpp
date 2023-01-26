#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>& v);

int main() {
  vector<int> a;
  a.push_back(1);
  cout << a.size() << endl;
  cout << a.empty() << endl;
  printVector(a);

  a.clear();
  cout << a.size() << endl;
  cout << a.empty() << endl;
  printVector(a);

  a.push_back(2);
  a.push_back(3);

  printVector(a);

  cout << a.front() << endl;
  cout << a.back() << endl;

  a.pop_back();
  printVector(a);
  
  cout << "---set---" << endl;
  unordered_set<int> set;

  set.insert(1);
  set.insert(1);
  cout << set.count(1) << endl;
  cout << set.size() << endl;
  cout << (set.find(1) == set.end()) << endl;
  cout << (set.find(2) == set.end()) << endl;

  set.erase(1);
  cout << (set.find(1) == set.end()) << endl;
  cout << (set.find(2) == set.end()) << endl;

  cout << "---map---" << endl;
  unordered_map<string, int> map;

  map["a"] = 1;
  map["b"] = 2;
  cout << map["a"] << endl;
  cout << map.size() << endl;

  map.erase("b");
  cout << map["a"] << endl;
  cout << map.size() << endl;
  cout << (map.find("a") == map.end()) << endl;
  cout << (map.find("b") == map.end()) << endl;

  cout << map.count("a") << " " << map.count("b") << endl;
  if (map.count("a")) cout << "has key a" << endl;
  if (map.count("b")) cout << "has key b" << endl;
  return 0;
}

void printVector(vector<int>& v) {
  cout << "--- vector ---" << endl;
  // for (int i = 0; i < v.size(); i ++) {
  //   cout << v[i] << ' ';
  // }
  for (vector<int>:: iterator it = v.begin(); it != v.end(); it ++) {
    cout << *it << ' ';
  }
  cout << endl;
  cout << "--- vector ---" << endl << endl;
}