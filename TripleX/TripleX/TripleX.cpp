#include <iostream>


void IntroductionMessage() {
    std::cout << "Welcome to Cybertron Command \n Access to Database Restricted behind Code.";
    std::cout << "\nERROR\n";
    std::cout << "\nBiometrics failed, enter code manually.\n";
}

bool PlayGame() 
{
    IntroductionMessage();
#pragma region Math
    //Numerical Values
    int CodeAlpha = 4;
    int CodeBeta = 2;
    int CodeCharlie = 5;

    //Addition and Samples
    int CodeSum = CodeAlpha + CodeBeta + CodeCharlie;
    int CodeProduct = CodeAlpha * CodeBeta * CodeCharlie;

    //Player Guesses
    int GuessA, GuessB, GuessC;
#pragma endregion



    //Display results
    std::cout << "3 Numbers are in the access code. \n";
    std::cout << "\n The codes add up give: " << CodeSum;
    std::cout << "\n Multiplied, these codes add up to give: " << CodeProduct << std::endl;


    //
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check for Guess
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n You Win, Autobot.";
        return true;
    }
    else
    {
        std::cout << "\n Be gone, Decepticon \n You Lose.";
        return false;
    }
}


int main()
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) {

        }
    }
    return 0;
}