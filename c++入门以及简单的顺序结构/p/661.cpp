#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d, y;
  cin >> a >> b >> c >> d >> y;

  double x = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
  printf("Media: %.1lf\n", x);

  if (x >= 7) cout << "Aluno aprovado." << endl;
  else if (x < 5) cout << "Aluno reprovado." << endl;
  else {
    cout << "Aluno em exame." << endl;
    printf("Nota do exame: %.1lf\n", y);
    double z = (x + y) / 2;
    if (z >= 5) cout << "Aluno aprovado." << endl;
    else cout << "Aluno reprovado." << endl;
    printf("Media final: %.1lf\n", z);
  }

  return 0;
}