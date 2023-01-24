#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n --) {
    string p1, p2;
    cin >> p1 >> p2;

    if (p1 == p2) cout << "Tie" << endl;
    else if (p1 == "Hunter" && p2 == "Bear") cout << "Player2" << endl;
    else if (p1 == "Bear" && p2 == "Gun") cout << "Player2" << endl;
    else if (p1 == "Gun" && p2 == "Hunter") cout << "Player2" << endl;
    else {
      cout << "Player1" << endl;
    }
  }

  return 0;
}