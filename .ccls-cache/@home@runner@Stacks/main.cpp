#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printRev(vector<char>& letters) {
  stack<char> stack;

  for (char c : letters) {
    stack.push(c);
  }

  while(!stack.empty()) {
    cout << stack.top();
    stack.pop();
  }

  cout << endl;
}

int main() {
  vector<char> letters { 'a', 'b', 'c' };
  printRev(letters);
}