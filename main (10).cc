#include <iostream>
#include <string>
int main() {
  std::cout << "Welcome to MadLibs!\n";
  std::cout << "To: ";
  std::string name;
  std::cin >> name;
  std::cout << "Emotion: ";
  std::string emotion;
  std::cin >> emotion;
  std::cout << "Animal: ";
  std::string animal;
  std::cin >> animal;
  std::cout << "Number: ";
  unsigned number;
  std::cin >> number;
  std::cout << "Letter: ";
  std::string letter;
  std::cin >> letter;
  std::cout << "Percent: ";
  double percent;
  std::cin >> percent;
  std::cout << "From: ";
  std::string your_name;
  std::cin >> your_name;
  std::cout << "\nDear " << name << ",\n"
       << "I am " << emotion
       << " that I was not able to complete my homework on time."
       << " My pet " << animal
       << " ate my textbook, and I was only able to retrieve " << number
       << " pages from its jaws. I hope I can get at least a " << letter
       << " grade because I've done " << percent << "% of the work.\n"
       << "Sincerely,\n"
       << your_name;
  return 0;
}
