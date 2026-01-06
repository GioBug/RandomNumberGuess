#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // code
    int answer, RandomNumber;
    srand(time(0));
    RandomNumber = rand() % 11;

do{
    cout << "Enter a number between 0 to 10" << endl;
    do{
        cin >> answer;
        if(answer < 0 || answer > 10){
            cout << "The number was meant to be between 0 to 10" << endl;
            cout << "Try again" << endl;
        }
    }while(answer < 0 || answer > 10);

if(answer != RandomNumber){
    cout << "Wrong, try again!" << endl;
    cout << "The correct number was: " << RandomNumber << endl;
    RandomNumber = rand() % 11;
}

}while(answer != RandomNumber);

cout << "Correct! Good job!!" << endl;

    return 0;
}