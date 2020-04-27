#include<iostream> 
#include<cmath>
#include<ctime> 
using namespace std; 

int main() 
{ 
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    
    
    //save hours minutes and seconds to variables so that we can update them
    int hours = (tPtr->tm_hour);
    int minutes = (tPtr->tm_min);
    int seconds = (tPtr->tm_sec);
    
    //user input variables
    int userInput = 0;
    
    while (userInput != 5) {
        //Determine if it is am or pm
        int twelve = 0;
        string amOrPm = "AM";
        if (amOrPm == "AM" || amOrPm == "am") {
            twelve = 0;
        }
        else {
          twelve = 12;
        }
        
        //Print out clock
        cout << "\n***************************\t***************************\n";
        cout << "*\t12-Hour Clock\t*\t*\t24-Hour Clock\t*\n";
        cout << "*\t" << (hours) << ":" << (minutes) << ":" << (seconds) << (amOrPm) << "\t*\t*\t" << (hours) + (twelve) << ":" << (minutes) << ":" << (seconds) << (amOrPm) << "\t*";
        cout << "\n***************************\t***************************\n";
        
        cout << "\n************************\n";
        cout << "* 1 - Add One Hour \t*\n";
        cout << "* 2 - Add One Minute \t*\n";
        cout << "* 3 - Add One Second \t*\n";        
        cout << "* 4 - Switch AM/PM \t*\n";
        cout << "* 5 - Exit \t\t*\n";
        cout << "************************\n";
        
        //take in the users input
        cin >> userInput;
        
        //depending on the users input, do something
        if (userInput == 1) {
            hours ++;
        }
        if (userInput == 2) {
            minutes ++;
        }
        if (userInput == 3) {
            seconds ++;
        }
        //Switch AM to PM or vice versa
        if (userInput == 4) {
            if (amOrPm == "AM") {
                amOrPm = "PM";
            }
            else if (amOrPm == "PM") {
                amOrPm = "AM";
            }
        }
    }
  return 0; 
}











