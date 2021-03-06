#include <iostream>
#include <string>

using std::string;

string reverse(string output, string input, int n) {
  if(n == 0) {
    return output + input.at(0);
  }

  output += input.at(n);
  return reverse(output, input, n - 1);
}

int main() {
  std::cout << "Enter some text: ";

  string input;
  std::cin >> input;

  std::cout << reverse("", input, input.length() - 1) << std::endl;

  return 0;
}