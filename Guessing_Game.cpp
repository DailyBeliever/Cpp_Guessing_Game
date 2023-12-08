#include <iostream>

// The 'using namespace std;' directive allows standard library 
// elements to be used without the 'std::' prefix in the current scope.
using namespace std;

// Function declarations | You must have this
int Game();
int Win();
int Lose();

// Main Function is of type int | returns an int
int main()
{
    cout << "Welcome to the Guessing Game Made in C++" <<endl;
    cout << "Click any key to continue ";
    cout << endl;
    cin.get();

    // Calls the game function
    Game();

    // Return 0 to indicate successful program execution
    return 0;   

}

// Game Function
int Game()
{
    // An int variable named secretNumber is holding the number 7
    int secretNumber = 7;

    // An int variable named guess will hold a number
    int guess;

    // An int variable named guesscount that is assigned 0
    int guessCount = 0;

    // An int variable named guessLimit that is assigned 3
    int guessLimit = 3;

    // An bool variable named outOfGuess which is assigned false
    bool outOfGuesses = false;

    // A while look that states while secretNumber IS NOPT equal to guess 
    // The loop will keep looping if guess doesn't equal secretnumber
    // and check if the user is out of guesses
    while(secretNumber != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
        // Outputs text with an endline
        cout << "Guess a number between 1-10:" << endl;
        // Outputs the Enter Guess with an endline
        cout << "Enter Guess:" << endl;
        // user input gets stored inside the guess
        cin >> guess;
        // Incrementing guessCount
        guessCount++;
        }
        else
        {
            // bool turns true and goes to Lose Function
            outOfGuesses = true;
            Lose();

            // Return 0 to indicate successful program execution
            return 0;
        }

    }
    
    // The secret word was guess and the program continues to Win Function
    Win();

    // Return 0 to indicate successful program execution
    return 0;

}

// Win Function
int Win()
{
    // A variable name choice1 which is an int
    int choice1;

    cout << "You Win" << endl;
    cout << "Would you like to play again?" <<endl;
    cout << "Enter 1 if yes or 2 for No" <<endl;
    
    // This goes here to prevent a loop
    cin >> choice1;
    if(choice1 == 1)
    {
        main();
    }
    if(choice1 == 2)
    {
      cout << "Goodbye! Thanks for playing." << endl;
      exit(0); // Exit the program with a status code of 0 (indicating a successful exit)      

    }
    else
    {
        cout <<"You Need to enter 1 or 2!" << endl;
        Win();
    }

    // Return 0 to indicate successful program execution
    return 0;

}

int Lose()
{
    // Variable choice is of type int
    int choice2;

    cout << "You Lose" << endl;

    cout << "Would you like to play again?" <<endl;
    cout << "Enter 1 if yes or 2 for No" <<endl;
    cin >> choice2;
    if(choice2 ==1)
    {
        cout << "Lets Start it Up!" << endl;
        cout << "============================" << endl;
        main();

    }
    if (choice2 == 2) {
        cout << "Goodbye! Thanks for playing." << endl;
        exit(0); // Exit the program with a status code of 0 (indicating a successful exit)
    }
    else
    {
        cout <<"You Need to enter 1 or 2!" << endl;
        Lose();
    }

    // Return 0 to indicate successful program execution
    return 0;

}