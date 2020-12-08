#include <iostream>
#include <ctime>

void IntroductionMessage(int Difficulty) {

    std::cout << "Cybertron Command \n Access to Database 'LEVEL - " << Difficulty << "' Restricted behind Code.";
    std::cout << "\nERROR\n";
    std::cout << "\nBiometrics failed, enter code manually.\n";
}

bool PlayGame(int Difficulty) 
{
    IntroductionMessage(Difficulty);
#pragma region Math
    //Numerical Values
    int CodeAlpha = rand() % Difficulty + Difficulty;
    int CodeBeta = rand() % Difficulty + Difficulty;
    int CodeCharlie = rand() % Difficulty + Difficulty;

    //Addition and Samples
    int CodeSum = CodeAlpha + CodeBeta + CodeCharlie;
    int CodeProduct = CodeAlpha * CodeBeta * CodeCharlie;
#pragma endregion

    //Display results
    std::cout << "3 Numbers are in the access code. \n";
    std::cout << "\n The codes added up give: " << CodeSum;
    std::cout << "\n Multiplied, these codes add up to give: " << CodeProduct << std::endl;

    //Player Guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check for Guess
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n ACCESS - GRANTED - FURTHER ACCESS WILL REQUIRE MORE DETAILED CODES. \n";
        return true;
    }
    else
    {
        std::cout << "\n ACCESS - DENIED - SUSPECT ACTIVITY WILL BE LOGGED BY TELETRAAN 1. \n";
        return false;
    }
}


int main()
{
    srand(time(NULL)); //Reconfigures seed


    std::cout << "-------------------------------" << std::endl;
    std::cout << "---------|||||||||||||---------" << std::endl;
    std::cout << "|||||--|||||||||||||||||--|||||" << std::endl;
    std::cout << "-|||||--|||---------|||---|||||" << std::endl;
    std::cout << "-|||||----|||-----|||----|||||-" << std::endl;
    std::cout << "--||-|||----|||-|||----|||-|||-" << std::endl;
    std::cout << "--|||--|||----|||----|||--|||--" << std::endl;
    std::cout << "---|--|--|||-------|||--|--||--" << std::endl;
    std::cout << "---|||--|-||-||-||-||-|--|||---" << std::endl;
    std::cout << "-----|||--||-|||||-||--|||-----" << std::endl;
    std::cout << "---|---|||||-|||||-|||||---|---" << std::endl;
    std::cout << "---|||--------|||--------|||---" << std::endl;
    std::cout << "---|||------|-|||-|------|||---" << std::endl;
    std::cout << "---|||||--|||-|||-|||--|||||---" << std::endl;
    std::cout << "---|||||-||||-|||-||||-|||||---" << std::endl;
    std::cout << "---|||||-||||-|||-||||-|||||---" << std::endl;
    std::cout << "---|||||-||||-|||-||||-|||||---" << std::endl;
    std::cout << "---|||||-||||-----||||-|||||---" << std::endl;
    std::cout << "-----|||-|||||||||||||-|||-----" << std::endl;
    std::cout << "-------|-|||-------|||-|-------" << std::endl;
    std::cout << "----------||-||||||-|----------" << std::endl;
    std::cout << "------------|||||||------------" << std::endl;

    std::cout << "Connecting to Cybertron Command Database - Welcome Autobot!" << std::endl;
    int LevelDifficulty = 1;
    const int MaxStage = 4;
    while (LevelDifficulty <= MaxStage) // Loop game untill all levels are finished
    {

        //std::cout << rand() % 10 << "\n"; Modulus example
        
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "DATABASE ACCESSED - HACK DETECTED!" << std::endl;
    std::cout << "ALL HAIL MEGATRON" << std::endl;
    std::cout << "Good job Decepticon! Retreat with the new intel!" << std::endl;
    return 0;
}