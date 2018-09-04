#include <iostream>
using namespace std;

int main() {
  int step;
  string result;

  cout << "Please input a number less than 10." << endl;
  cin >> step;

  while (step >= 10) {
    cout << "Number too big. Please input a number less than 10.";
    cin >> step;
  }

  for (int i = 1; i <= step; i++) {
    result += to_string(i);
  }

  for (int j = step - 1; j > 0; j--) {
    result += to_string(j);
  }

  cout << result << endl;
  return 0;
}
