#include <bits/stdc++.h>
using namespace std;

class Person {
  private:
    int age, height;
    double money;
    string books[100];
  
  public:
    string name;

    void say() {
      cout << "I'm " << name << endl;
    }

    void set_age(int a) {
      age = a;
    }

    int get_age() {
      return age;
    }

    void add_money(double x) {
      money += x;
    }
};

struct Node {
  int val;
  Node* next;
} *head;

int main() {
  // 类
  /* Person c;

  c.name = "ls";
  c.set_age(11);
  c.add_money(100);

  c.say();

  cout << c.get_age() << endl; */

  // 指针、引用
  /* int a = 10;
  int *p = &a;

  *p += 5;
  cout << a << endl;

  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i ++) {
    cout << *(arr + i) << endl;
  }

  int &p2 = a;
  p2 += 5;
  cout << a << endl; */

  // 链表
  for (int i = 1; i <= 5; i ++) {
    Node* p = new Node();
    p->val = i;
    p->next = head;
    head = p;
  }

  for (Node* p = head; p; p = p->next) {
    cout << p->val << ' ';
  }

  cout << endl;

  return 0;
}