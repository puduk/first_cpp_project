#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
     string name;
     string surname;
     string country;
     string grade;
     double age;
     double height;
     double weight;
     int phone_number;
     char gender;
     char country_letter;

     cout << "Welcome user:" << endl;
     cout << "Enter your name: " << endl;
     getline(cin , name);
     cout << "Enter your surname: " << name <<endl;
     getline(cin , surname);
     cout << "Where are you from? " << name << " " << surname <<endl;
     getline(cin,country);
     cout << "What is your country character: " << endl;
     cin >> country_letter;
     cin.ignore();
     cout << "How old are you? " << name <<endl;
     cin >> age;
     cin.ignore();
     cout << "What is your phone number? "  <<endl;
     cin >> phone_number;
     cin.ignore();

     cout << "Okay we entered your data to system. " << endl;
     cout << "System proccessing..." << endl;
     cout << endl;
     cout << "Now we need your height" << endl;
     cin >> height;
     cin.ignore();
     cout << "Now we need your weight" << endl;
     cin >> weight;
     cin.ignore();
     cout << "And for last what is your gender (M-F)" << endl;
     cin >> gender;
     cin.ignore();
     cout << "Calculating the BMI score..." << endl;
     cout << "All data will shown at the end of the page..." << endl;



     string courses[3];
     int grades[3];

     cout << "We need yor 3 favorite course: " << endl;
     cout << "Enter your 1st course: " << endl;
     getline(cin , courses[0]);
     cout << "Whats your grade in: " << courses[0] << endl;
     cin >> grades[0];
     cin.ignore();


     cout << "Enter your 2nd course: " << endl;
     getline(cin , courses[1]);
     cout << "Whats your grade in: " << courses[1] << endl;
     cin >> grades[1];
     cin.ignore();


     cout << "Enter your 3rd course: " << endl;
     getline(cin , courses[2]);
     cout << "Whats your grade in: " << courses[2] << endl;
     cin >> grades[2];
     cin.ignore();

     bool isEligible = age > 18 ? true : false;
     double bmi = weight / (height * height);


     srand(time(nullptr));
     int number = rand() % 100;


     cout << left;
     cout << "-------------------- USER DATA --------------------" << endl;
     cout << setw(30)<<"Name: " << name << endl;
     cout << setw(30)<<"Surname: " << surname << endl;
     cout << setw(30)<<"Country: " << country << " " << country_letter<< endl;
     cout << setw(30)<<"Age: " << age << endl;
     cout << setw(30)<<"Gender: " << gender << endl;
     cout << setw(30)<<"Height: " << height << endl;
     cout << setw(30)<<"Weight: " << weight << endl;
     cout << setw(30)<<"Phone number: " << phone_number << endl;
     cout << endl;
     cout << endl;

     cout << ">> " <<setw(10)<<"BMI score: " << bmi << endl;
     cout << boolalpha;
     cout << ">> " <<setw(10)<<"Is Eligible: " << isEligible << endl;
     cout << noboolalpha;
     cout << ">> " <<setw(10)<<"Is Eligible: " << isEligible << endl;
     cout << endl;
     cout << endl;
     cout << "Today is lucky number: " << number << "/100" << endl;
     cout << endl;

     cout << "int min: "<< numeric_limits<int>::min() << " | "
          << "int max:" << numeric_limits<int>::max() << endl;
     cout << "float min:" << numeric_limits<float>::min() << " | "
          << "float max:" << numeric_limits<float>::max() << endl;
     cout << endl;

     cout << left;
     cout << setw(10) << "Course" << "|" << setw(8) << "Score" << endl;
     cout << "----------" << "|"<< "--------" << endl;
     cout << setw(10) << courses[0] << "|" << setw(8) << grades[0] << endl;
     cout << setw(10) << courses[1] << "|" << setw(8) << grades[1] << endl;
     cout << setw(10) << courses[2] << "|" << setw(8) << grades[2] << endl;
     cout << "-------------------- USER DATA --------------------";
}

