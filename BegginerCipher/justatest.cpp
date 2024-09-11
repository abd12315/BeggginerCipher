#include <iostream>
#include <Windows.h>
#include <string> //for string error check

void setColor(int color){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Entry point of the Program
    SetConsoleTextAttribute(hConsole, color); //ending point of the Program
}

using namespace std; // std use as bias not to use std:: again

int main() {
    setColor(2); //Green Color Maybe
    string response; //string type data for entering response type var
    cout << "Please Enter the text you wished to be Ciphered: "; //Enter text
    getline(cin, response); //for multiline input

    // Display each character with delay
    for (int i = 0; i < response.length(); i++) {
        cout << response[i]; //your inserted char
        Sleep(500); //sleep for 500ms
    }

    setColor(5); //set color

    cout << "\nRearranging";
    for (int j = 0; j < 3; j++) {
        cout << "."; // dot for animation
        Sleep(500); //sleep for 500ms
    }
       setColor(6); //don't know which color this is
    // Perform Caesar cipher encryption
    for (int i = 0; i < response.length(); i++) {
        cout << endl << int(response[i]); // Print ASCII value
        int response2 = int(response[i]); // Save ASCII value
        string str = to_string(response2); // Convert to string

        for (int l = 0; l < str.length(); l++) {
            char ciphtxt = str[l] + 3; // Caesar cipher
            int cipout = int(ciphtxt); // Get integer value of ciphered character
            cout << cipout; // Output encrypted value
            string decr_1 = to_string(cipout); //convert this into the string
            for (int m=0;m < decr_1.length(); m++){
              int ciphabc = decr_1[m] - '0'; //let's see if we can convert this into integer
              char fin_out = char(ciphabc); //typecasting this furthur
              cout<<fin_out; //for representing some sort of message
              

            }

        }
     //now rearrranging the output back
     
    }

    system("pause>0"); // to keep console open
    return 0; // end program
}
