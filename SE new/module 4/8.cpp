#include <iostream>

#include <string>

class Person {
  private: std::string name;
  int age;
  std::string country;

  public:
    // Setter functions
    void setName(const std::string & n) {
      name = n;
    }

  void setAge(int a) {
    age = a;
  }

  void setCountry(const std::string & c) {
    country = c;
  }

  // Getter functions
  std::string getName() {
    return name;
  }

  int getAge() {
    return age;
  }

  std::string getCountry() {
    return country;
  }
};

int main() {
  // Create a person object
  Person person;

  // Set the person's details
  person.setName("Saveli Sujatha");
  person.setAge(25);
  person.setCountry("USA");

  // Get and display the person's details
  std::cout << "Name: " << person.getName() << std::endl;
  std::cout << "Age: " << person.getAge() << std::endl;
  std::cout << "Country: " << person.getCountry() << std::endl;

  return 0;
}
