question
/*Kala is expected to write a setup function that will write some data that is received from the user to a file named "test.txt". You are provided with the main() method where your setup code is called, and if it returns 0, then it will proceed to read the file and print all the data that was provided in the same format.



The input should be an integer, a float, or a string. The output shall be the integer and float in the first line and the string in the second line. If the setup code fails, then return non-zero upon receipt, upon which the main method will print "Unable to setup." If you cannot open the file for either reading or writing, then you have to print "Cannot open the file."

Input format :
The input contains an integer, a float, and a string. These inputs can be provided through the console, and they should be entered in that order, separated by spaces.

Output format :
The program reads the contents of the "test.txt" file and prints the values stored in it. The output format is as follows:



The first line of the output will contain the integer and float values retrieved from the file, separated by a space.

The second line of the output will contain the string retrieved from the file.



Refer to the sample output for formatting specifications.

Code constraints :
The integer input can be any valid integer value.

The float input can be any valid float value.

The string input can be any sequence of characters without spaces, up to a maximum of 79 characters.

Sample test cases :
Input 1 :
10 22.34 
HelloWorld!
Output 1 :
10 22.34 
HelloWorld!
Input 2 :
0 0.0
Empty String
Output 2 :
0 0 
Empty
Input 3 :
-50 0.25
Today is a beautiful day.
Output 3 :
-50 0.25 
Today*/
Answer
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int setup() {
    int integerInput;
    float floatInput;
    string stringInput;

    cin >> integerInput >> floatInput >> stringInput;

    ofstream outFile("test.txt");
    if (!outFile.is_open()) {
        cout << "Cannot open the file." << endl;
        return -1;
    }

    outFile << integerInput << " " << floatInput << "\n" << stringInput << endl;
    outFile.close();

    return 0;
}

int main() {
    if (setup() != 0) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    ifstream inFile("test.txt");
    if (!inFile.is_open()) {
        cout << "Cannot open the file." << endl;
        return 1;
    }

    int integerOutput;
    float floatOutput;
    string stringOutput;

    inFile >> integerOutput >> floatOutput;
    inFile.ignore();
    getline(inFile, stringOutput);
    inFile.close();

    cout << integerOutput << " " << floatOutput << endl;
    cout << stringOutput << endl;

    return 0;
}
