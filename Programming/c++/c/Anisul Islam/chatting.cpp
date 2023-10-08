#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n\n";
    cout << "---------------------";
    cout << "\n\nHi, I am shoaib." << endl
         << "What do you want to do now?" << endl;
    cout << "\n1. I want to talk with you.\n";
    cout << "2. I want to calculate something.\n";
    cout << "3. I want to share my feelings with you, shoaib.\n";
    cout << "\n\nEnter 1, 2 or, 3 to select a option: ";

    int first_choice;
    cin >> first_choice;

    if (first_choice != 1 && first_choice != 2 && first_choice != 3)
    {
        cout << "\n\n\n------------------------------------------------------------------------\n";
        cout << "Sorry, you have entered invalid value.\n";
        cout << "OK, try again...\n\n\n";
    }

    //This block is for the first option: I want to talk with you.

    if (first_choice == 1)
    {
        cout << "\n\nSo, you want to talk with me! Wow!\n";
        cout << "OK, let me ask you some questions.\n"
             << "What is your name?\n";
        cout << "Enter your name: ";

        string name_of_first_choice;
        cin >> name_of_first_choice;
        cout << "\nWow! " << name_of_first_choice << " is a nice name.\n\n";
        cout << "Now ";
        cout << name_of_first_choice << ", tell me- is my name 'shoaib' nice too?\n";
        cout << "Enter your opinion: ";

        string shoaib_Ques_Ans;
        cin >> shoaib_Ques_Ans;
        cout << "\nThank you " << name_of_first_choice << ".\n\n"
             << endl;
        cout << "Who is your favourite?\n";
        cout << "1. Actor.\n";
        cout << "2. Writer.\n";
        cout << "3. Politican.\n";
        cout << "\nEnter 1 or, 2 or, 3: ";
        int favourite_personality;
        cin >> favourite_personality;
        if (favourite_personality == 1)
        {
            cout << "\n\nSo, you like actors! Who is your favourite actor?\n";
            cout << "Enter his name: ";
            string favourite_actor;
            cin >> favourite_actor;
            cout << "\nWow! " << favourite_actor << " is a good actor.\n";
        }
        if (favourite_personality == 2)
        {
            cout << "\n\nSo, you like writers! Who is your favourite writer?\n";
            cout << "Enter his name: ";
            string favourite_writer;
            cin >> favourite_writer;
            cout << "\nWow! " << favourite_writer << " is really a good writer.\n";
        }
        if (favourite_personality == 3)
        {
            cout << "\n\nSo, you like politicians! Who is your favourite politician?\n";
            cout << "Enter his name: ";
            string favourite_politician;
            cin >> favourite_politician;
            cout << "\nWow! " << favourite_politician << " is your favourite politician.\n";
        }
        if (favourite_personality != 1 && favourite_personality != 2 && favourite_personality != 3)
        {
            cout << "Sorry, you entered an invalid input. Let's try again.\n";
        }
        cout << "\n\nOK, let's talk on another topic.......\n\n";
        cout << "My name is shoaib. But, if you had a choice to give me a new name then, ";
        cout << "what name you would choose for me?";
        cout << "\nEnter that name: ";
        string shoaibs_another_name;
        cin >> shoaibs_another_name;
        cout << "\n\n"
             << shoaibs_another_name << " is something exciting! Thank you " << name_of_first_choice;
        cout << "\n\n\n\nNow good bye.\n\n";
    }

    //This block is for the second option: I want to calculate something.
    //Selecting from 5th line's options.

    if (first_choice == 2)
    {
        cout << "\n1. Calculate how much time you should spend daily for Salat/ prayer:\n";
        cout << "2. Calculate how much money you should spend daily::\n";
        cout << "3. Calculate how much time you have for rest daily:\n";
        cout << "\nEnter 1/ 2/ 3 to select a choice: ";
        int calculate_choice;
        cin >> calculate_choice;
        if (calculate_choice == 2)
        {
            cout << "\n\nDo you earn money?\n";
            cout << "1. Yes.\n2. No\n\n";
            cout << "Enter 1 or, 2 to select a option: ";
            int earning_answer;
            cin >> earning_answer;
            if (earning_answer == 2)
            {
                cout << "\n\n\n-------------------------------------------------------------------------";
                cout << "\nThen, you have nothing to spend from your own salary.\n";
                cout << "Thank you for calculating by me.\n";
                cout << "-------------------------------------------------------------------------\n\n";
            }
            if (earning_answer == 1)
            {
                cout << "\n\nPlease enter the amount of your monthly income in thousand.\n";
                cout << "i.e. 30.\n\n";
                cout << "Enter the amount: ";
                int monthly_income;
                cin >> monthly_income;
                cout << "\n\nDo you want to save some money monthly?\n";
                cout << "1. Yes.\n2. No\n\n";
                cout << "Enter 1 or, 2 to select a option: ";
                int save_money_choice;
                cin >> save_money_choice;
                if (save_money_choice == 1)
                {
                    cout << "\n\nHow much do you spend monthly?\n";
                    cout << "Enter the amount in thousand i.e. 20.\n";
                    cout << "Enter the amount here: ";
                    int spend_amount;
                    cin >> spend_amount;
                    cout << "\n\n\n\n\n\n\nLast question. How much money do you want to save monthly?\n";
                    cout << "Enter the amount in thousand i.e. 20.\n\n";
                    cout << "Enter the amount: ";
                    int saving_amount;
                    cin >> saving_amount;
                    if (monthly_income > (spend_amount + saving_amount))
                    {
                        int money_to_spend = monthly_income - (saving_amount + spend_amount);
                        int daily_spend_amount = (money_to_spend * 1000) / 30;
                        cout << "\n\n\n\n";
                        cout << "\n------------------------------------------------------------------------------------\n";
                        cout << "You have to spend " << daily_spend_amount << " taka daily ";
                        cout << "\nas your monthly income is " << monthly_income << " thousands\nand ";
                        cout << "you want to save " << saving_amount << " thousands monthly.\n";
                        cout << "------------------------------------------------------------------------------------\n\n";
                    }
                }
                if (save_money_choice == 2)
                {
                    cout << "\n\nHow much do you spend monthly?\n";
                    cout << "Enter the amount in thousand i.e. 20.\n";
                    cout << "Enter the amount here: ";
                    int spend_amount;
                    cin >> spend_amount;
                    int daily_spend_amount = (monthly_income * 1000) / 30;
                    cout << "\n\n\n";
                    cout << "----------------------------------------------------------------------\n";
                    cout << "You have " << daily_spend_amount << " thousands to spend daily.\n";
                    cout << "----------------------------------------------------------------------\n\n";
                }
            }
            cout << "\n\n----- Thank you. Good bye. -----\n\n";
        }

        //Another choice of 68 line.
        //Calculation for getting the spending time for Salat daily.
        if (calculate_choice == 1)
        {
            cout << "\n------------------------------------------------------------------\n";
            cout << "\nSome people pray in home or, office.\n";
            cout << "\nSo, first tell me, do you go to Masjid for every Salat?\n";
            cout << "1. Yes.\n2. No.\n\n";
            cout << "\n-------------------------------------------------------------------\n";
            cout << "\n\nEnter 1 or, 2 to select a option: ";
            int Masjid_choice;
            cin >> Masjid_choice;
            if (Masjid_choice == 2)
            {
                cout << "\n\n\n\n---------------------------------------------------------------------\n";
                cout << "Result:";
                cout << "\n---------------------------------------------------------------------\n";
                cout << "\n\nYou have to spend:\n\n10 minutes for Fazr Salat.\n";
                cout << "10 minutes for Zuhr Salat.\n";
                cout << "8 minutes for Asr Salat.\n";
                cout << "10 minutes for Magrib Salat.\n";
                cout << "20 minutes for Isha Salat.\n";
                cout << "Total time: 58 minutes Salat.\n\n";
                cout << "\n----------------------------------------------------------------\n";
                cout << "\n\nWow! You can complete your Salat in less than a hour!\n";
                cout << "\n\n";
                cout << "Now good bye. See you again.\n\n\n\n";
            }
            if (Masjid_choice == 1)
            {
                cout << "\n\nHow much time you do need to go to Masjid and to come back?\n\n";
                cout << "Enter the time in minutes: ";
                int minutes;
                cin >> minutes;
                int Fazr_time = 10 + minutes;
                int Zuhr_time = 10 + minutes;
                int Asr_time = 8 + minutes;
                int Magrib_time = 10 + minutes;
                int Isha_time = 20 + minutes;
                cout << "\n\n\n\n\n";
                cout << "-------------------------------------------------------------------------\n";
                cout << "Result:\n";
                cout << "-------------------------------------------------------------------------\n";
                cout << "\n\nYou have to spend " << Fazr_time << " minutes for Fazr Salat.\n";
                cout << "\n\nYou have to spend " << Zuhr_time << " minutes for Zuhr Salat.\n";
                cout << "\n\nYou have to spend " << Asr_time << " minutes for Asr Salat.\n";
                cout << "\n\nYou have to spend " << Magrib_time << " minutes for Magrib Salat.\n";
                cout << "\n\nYou have to spend " << Isha_time << " minutes for Isha Salat.\n";
                cout << "\n";
                cout << "--------------------------------------------------------------------------\n";
                cout << "\n\nMay Allah accept your Salat.\n\n\n\n";
            }
        }

        //From 68'th line.
        //Calculation for getting the amount of minutes the user have for rest daily.
        if (calculate_choice == 3)
        {
            cout << "How much time you work daily?";
            cout << "Enter the value in hour: ";
            int working_time;
            cin >> working_time;
            int time_for_eating = 1;
            int time_for_excercise = 1;
            int total_time_without_rest = working_time + time_for_eating + time_for_excercise;
            if (total_time_without_rest < 24)
            {
                int rest_time = 24 - total_time_without_rest;
                cout << "\nYou have " << rest_time << " hours for rest daily.\n";
            }
            if (total_time_without_rest > 24)
            {
                cout << "\nSomething is not OK.\nMay be, you have no time for rest or, ";
                cout << "you have entered the amount of time that is more than 24!\n";
                cout << "Please try again...";
            }
        }
    }

    /*
    This is the block for 3rd option:
    3. I want to share my feelings with you, shoaib.
    */

    if (first_choice == 3)
    {
        cout << "\n\n\n\n";
        cout << "---------------------------------------------------------------------------------";
        cout << "\nI am glad to know that, you want to share your feelings with me!\n";
        cout << "\n\nOK, first tell me-\n";
        cout << "How are you?\n";
        cout << "\n1. Happy.\n2. Sad.\n";
        cout << "-----------------------------";
        cout << "\n\nEnter 1 or, 2: ";
        int happy_or_sad;
        cin >> happy_or_sad;
        //If happy......
        if (happy_or_sad == 1)
        {
            cout << "\n\nThat's great. I am also happy.\n\n";
            cout << "You wanted to share your feelings.\nWrite your feelings: ";
            string happy_feelings;
            cin >> happy_feelings;
            cout << "\n\n\n\n----------------------------------------------------------------------";
            cout << "\n\nThank you for sharing your feelings with me.\n";
            cout << "\n\nNow good bye. See you again...\n\n\n\n";
        }
        if (happy_or_sad == 2)
        {
            cout << "\n\n\n--------------------------------------------------";
            cout << "\nOh no!\n";
            cout << "Why are you sad?\n\nWrite your feelings here: ";
            string sad_feeling;
            cin >> sad_feeling;
            cout << "\n\n\n-------------------------------------------------------------";
            cout << "\nPlease don't be very sad.\n";
            cout << "\nHappyness will come soon in your life, I wish.\n";
            cout << "\n\nNow I have to go......\n";
            cout << "Good bye, dear. See you soon.\n";
            cout << "-------------------------------------------------------------\n\n\n";
        }
    }
}