#include <iostream>
#include <unistd.h> // in linux: sleep()
// #include <windows.h> // in windows: Sleep()
#include <stdlib.h>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    system("clear");
    time_t start, finish;
    long product;
    time(&start);
    int sec = 0;
    int choice;
    float score;
    string paragraphOne_150Words = "A computer is a widely used device. Almost every family has a computer. It can perform various functions and make our lives easier. It has four main parts: Monitor, Keyboard, CPU, and Mouse. A Computer can be used to send and receive messages and emails. It also has features like the paint tool, notepad, and calculator. It allows us to store and modify data. A computer is a very reliable device and is used everywhere, starting from schools to offices to medical fields. The only disadvantage of a computer is that we depend too much on it and use it to complete even the easiest of tasks. Even if that is the case, there is nothing that a computer cannot do for us. Scientists are working every day to improve the quality of computers. Having basic knowledge about computers is important in this generation so that work can be done easily.";
    string paragraphTwo_250Words = "There is no place on this planet where a computer is not used. Computers are an essential part of our lives. Whether it is school, college, or office work, most of it is completed with a computer’s help. It has four essential parts: Monitor, Keyboard, CPU, and Mouse. They are the hardware of any computer system. The monitor is like the T.V screen, which displays the input data. The keyboard is the part that is used to type sentences or write numbers on the monitor. The mouse is used to click icons on the monitor, and the CPU is the brain of the computer. A computer makes our lives ten times easier. It has features like the paint tool which can be used to draw and paint on the monitor—Word, which can be used to take notes. Music players and Windows Media Player can be used to play music and watch movies and videos. A computer can also be connected to the internet, enabling the user to watch movies and videos online. A computer is used to send and receive emails and store and alter data. It makes complex calculations easier. Computers are used widely in industries, government institutions, banks, insurance companies, schools, offices, medical fields, and of course, in every home. However, using a computer comes with a few disadvantages. Hackers can hack and steal private information through viruses any time they like. Using a computer makes us lazy since we rely too much on it and stop working hard. Even with problems, no doubt living our lives would be impossible without a computer by our side. Researchers are working day and night to increase the quality of computers. Knowing operating a computer is a must in this generation. If we do not have that, we will fall behind in the daily race of life.";

    cout << "Choose Any One Paragraph : \n";
    cout << "1) Paragraph One 150 Words\n";
    cout << "2) Paragraph Two 250 Words\n\n";
    cout << ">>> ";
    cin >> choice;
    system("clear");
    if (choice == 1)
    {
        string userinput;
        cout << "\tParagraph One 150 Words : \n";
        cout << paragraphOne_150Words << endl;

        cout << "\n\tStart Typing :\n";
        getline(cin >> ws, userinput);
        if (paragraphOne_150Words == userinput)
        {
            time(&finish);
            int mins = difftime(finish, start) / 60;
            score = 150 / mins;
            cout << "\n\n--------------------------\nTime consumed = " << difftime(finish, start) << " seconds"
                 << ", that is " << mins << " minutes";
            cout << "\nYour Typing Skills are Awesome :)\nEverything Was Correct!!\n";
            cout << "Your Score is " << score << " Words per Minute! \n";
            if (score == 150)
            {
                cout << "\n\nYou are Cheating I Guess!\n\n";
            }
        }
        else
        {
            time(&finish);
            int mins = difftime(finish, start) / 60;
            score = 150 / mins;
            cout << "\n\n--------------------------\nTime consumed = " << difftime(finish, start) << " seconds"
                 << ", that is " << mins << " minutes";
            cout << "\nYour Typing Skills are Awesome :)\nSometing was Incorrect!!\n";
            cout << "Your Score is " << score << " Words per Minute! \n";
        }
    }
    else if (choice == 2)
    {
        string userinput;
        cout << "\tParagraph Two 250 Words : \n";
        cout << paragraphTwo_250Words << endl;

        cout << "\n\tStart Typing :\n";
        getline(cin >> ws, userinput);
        if (paragraphTwo_250Words == userinput)
        {
            time(&finish);
            int mins = difftime(finish, start) / 60;
            score = 150 / mins;
            cout << "\n\n--------------------------\nTime consumed = " << difftime(finish, start) << " seconds"
                 << ", that is " << mins << " minutes";
            cout << "\nYour Typing Skills are Awesome :)\nEverything Was Correct!!\n";
            cout << "Your Score is " << score << " Words per Minute! \n";
            if (score == 150)
            {
                cout << "\n\nYou are Cheating I Guess!\n\n";
            }
        }
        else
        {
            time(&finish);
            int mins = difftime(finish, start) / 60;
            score = 150 / mins;
            cout << "\n\n--------------------------\nTime consumed = " << difftime(finish, start) << " seconds"
                 << ", that is " << mins << " minutes";
            cout << "\nYour Typing Skills are Awesome :)\nSometing was Incorrect!!\n";
            cout << "Your Score is " << score << " Words per Minute! \n";
        }
    }
    else
    {
        cout << "Wrong Choice!\n";
    }

    //measuring Time
}

/*



Short Paragraph on Computer – 150 Words
A computer is a widely used device. Almost every family has a computer. It can perform various functions and make our lives easier. It has four main parts: Monitor, Keyboard, CPU, and Mouse. A Computer can be used to send and receive messages and emails. It also has features like the paint tool, notepad, and calculator. It allows us to store and modify data. A computer is a very reliable device and is used everywhere, starting from schools to offices to medical fields. The only disadvantage of a computer is that we depend too much on it and use it to complete even the easiest of tasks. Even if that is the case, there is nothing that a computer cannot do for us. Scientists are working every day to improve the quality of computers. Having basic knowledge about computers is important in this generation so that work can be done easily.

Paragraph on Computer – 250 Words
There is no place on this planet where a computer is not used. Computers are an essential part of our lives. Whether it is school, college, or office work, most of it is completed with a computer’s help. It has four essential parts: Monitor, Keyboard, CPU, and Mouse. They are the hardware of any computer system. The monitor is like the T.V screen, which displays the input data. The keyboard is the part that is used to type sentences or write numbers on the monitor. The mouse is used to click icons on the monitor, and the CPU is the brain of the computer. A computer makes our lives ten times easier. It has features like the paint tool which can be used to draw and paint on the monitor—Word, which can be used to take notes. Music players and Windows Media Player can be used to play music and watch movies and videos. A computer can also be connected to the internet, enabling the user to watch movies and videos online. A computer is used to send and receive emails and store and alter data. It makes complex calculations easier. Computers are used widely in industries, government institutions, banks, insurance companies, schools, offices, medical fields, and of course, in every home. However, using a computer comes with a few disadvantages. Hackers can hack and steal private information through viruses any time they like. Using a computer makes us lazy since we rely too much on it and stop working hard. Even with problems, no doubt living our lives would be impossible without a computer by our side. Researchers are working day and night to increase the quality of computers. Knowing operating a computer is a must in this generation. If we do not have that, we will fall behind in the daily race of life.

*/