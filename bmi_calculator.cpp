/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Juan Barahona
 * Date:12/18/2026
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
  
  string name, decision;
  double  weight, height, bmi;
  
  cout << "please enter your name: ";// with "cout" you give the user a question or something to answer
  cin >> name;                        //With "cin" the user can provide/write the necessary information.
  cout << "\nWelcome "<<name<<"  to the BMI Calculator!" << endl;
  cout << "This program will calculate your Body Mass Index." << endl;
  cout << endl;
  cout << "please enter your weight in kilograms: ";
  cin >> weight;
  cout << "\nnow please enter your height in meters: ";
  cin >> height;
  
  bmi = weight / (height * height);//Here, the acronym BMI (which stands for Body Mass Index) is
                                  //assigned as the result of the equation "weight / (height * height)"
  
  cout << "\nDo you want to know your BMI category? (yes/no): ";
  cin >> decision;//Here I give the user the option to decide whether or not they want to know the information.
  
  if (decision == "yes" || decision == "Yes") {//If the answer is yes, the following code will be executed.
        cout << "\nYour BMI is: " << bmi << endl;
        if (bmi < 18.5) {//With this, I make it calculate the BMI to determine the category.
            cout << "your BMI Category is: Underweight" << endl;//If the above is correct, then we proceed to write this.
        } else if (bmi < 25) {
            cout << "your BMI Category is: Normal" << endl;
        } else if (bmi < 30) {
            cout << "your BMI Category is: Overweight" << endl;
        } else {
            cout << "your BMI Category is: Obese" << endl;
        }
    } else {//If the answer to the question is not yes, the following code is executed and everything before is skipped.
        cout << "Okay no problem." << endl;
        cout << "\nYour BMI is: " << bmi << endl;
    }
  cout << "\nThank you for using the BMI Calculator!" << endl;

return 0;
}
