#include <iostream>
using namespace std;

int main()
{
  int a[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };

  for (int i = 1; i < 10; i++) { a[i] = a[i - 1]; }
  cout << "a. ";
  for (int i = 0; i < 10; i++) { cout << a[i] << " "; }
  cout << endl;

  int b[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 9; i > 0; i--) { b[i] = b[i - 1]; }
  cout << "b. ";
  for (int i = 0; i < 10; i++) { cout << b[i] << " "; }
  cout << endl;

  int c[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 0; i < 9; i++) { c[i] = c[i + 1]; }
  cout << "c. ";
  for (int i = 0; i < 10; i++) { cout << c[i] << " "; }
  cout << endl;

  int d[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 8; i >= 0; i--) { d[i] = d[i + 1]; }
  cout << "d. ";
  for (int i = 0; i < 10; i++) { cout << d[i] << " "; }
  cout << endl;

  int e[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 1; i < 10; i++) { e[i] = e[i] + e[i - 1]; }
  cout << "e. ";
  for (int i = 0; i < 10; i++) { cout << e[i] << " "; }
  cout << endl;

  int f[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 1; i < 10; i = i + 2) { f[i] = 0; }
  cout << "f. ";
  for (int i = 0; i < 10; i++) { cout << f[i] << " "; }
  cout << endl;

  int g[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 0; i < 5; i++) { g[i + 5] = g[i]; }
  cout << "g. ";
  for (int i = 0; i < 10; i++) { cout << g[i] << " "; }
  cout << endl;

  int h[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  for (int i = 1; i < 5; i++) { h[i] = h[9 - i]; }
  cout << "h. ";
  for (int i = 0; i < 10; i++) { cout << h[i] << " "; }
  cout << endl;

  return 0;
}