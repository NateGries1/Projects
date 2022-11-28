#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Welcome to MadLibs!" << endl;
  cout << "To: ";
  string name;
  cin >> name;
  cout << "Emotion: ";
  string emotion;
  cin >> emotion;
  cout << "Animal: ";
  string animal;
  cin >> animal;
  cout << "Number: ";
  int number;
  cin >> number;
  cout << "Letter: ";
  string letter;
  cin >> letter;
  cout << "Percent: ";
  double percent;
  cin >> percent;
  cout << "From: ";
  string your_name;
  cin >> your_name;
  cout << endl;
  cout << "Dear " << name << ",\n"
       << "I am " << emotion
       << " that I was not able to complete my homework on time."
       << " My pet " << animal
       << " ate my textbook, and I was only able to retrieve " << number
       << " pages from its jaws. I hope I can get at least a " << letter
       << " grade because I've done " << percent << "% of the work.\n"
       << "Sincerely,\n"
       << your_name;
}
