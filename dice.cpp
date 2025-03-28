#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() {
    return (rand() % 6) + 1; 
}

int main() {
    srand(time(0)); 
    
    char choice;
    do {
        cout << "Rolling the dice...\n";
        int result = rollDice();
        cout << "You rolled a " << result << "!\n";
        
        cout << "Roll again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y' || choice == 'T' || choice == 't');
    
    cout << "Thanks for playing!\n";
    return 0;
}
