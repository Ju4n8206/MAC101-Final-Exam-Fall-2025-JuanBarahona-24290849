 /*CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Juan Barahona 
 * Date: 12/18/2026
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm 
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
*/  
#include <iostream>
using namespace std;

int main() {
  int numbers[100] = {                        
      63, 12, 89, 45, 23, 78, 34, 91, 56, 7,  
      82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
      98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
      21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
      52, 19, 86, 31, 65, 9, 77, 42, 24, 88,        
      54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
      35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
      51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
      33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
      28, 90, 55, 17, 79, 4, 64, 2, 53, 60};

//what Im going to  do now is selet the first 20 numbers from the array, 
//for make the work moreeasi, using only 20 elements instead of 100,
//and verify that the numbers are in ascending order
  cout << "first 20 numbers from the array before sorting:" << endl;
    for (int i = 0; i < 20; i++){    
    }                              
//this part copies the first 20 numbers in the array, starting from index 0 (which is the first number/element in the list)
// up to index 19 (which is the 20th element in the array).
        cout << numbers[i] << " ";
    cout << endl;
  
//here it begin to sort the numbers in ascending order.
 for (int i = 0; i < 20; i++){                //this line creates a lop that control how many times the array comparison process will be repeated
        for (int j = 0; j < 19; j++){         //here it starts an inner loop within the aray, comparing two numbers that are nex to each other
            if (numbers[j] > numbers[j + 1]){ //this checks if the number is greater than the next number to determin if they are in the incorrect order
                int temp = numbers[j];        //this create a temporary variable to store the value f the first number and prevent it from being lost during the swap
                numbers[j] = numbers[j + 1];  // moves the value of the smaller number to the left
                numbers[j + 1] = temp;        //this place the value stored in the temporary variable on the right compelting the swap
            }
        }
    }
//now the first 20 elements are organized, so now i print them again to show them in ordet.
  cout << "\nfirst 20 numbers from the array after sorting:" << endl;
  for (int i = 0; i < 20; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

//Now that we see that the numbers are in order, we can do it with the 100 numbers 
//doing the same thing but just changing some values like change 20 to 100 and 19 to 99
cout << "\nthe 100  nunbers before sorting:" << endl;
    for (int i = 0; i < 100; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 99; j++){
            if (numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "\nthe 100 nunbers after sorting:" << endl;
    for (int i = 0; i < 100; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

return 0;
}
