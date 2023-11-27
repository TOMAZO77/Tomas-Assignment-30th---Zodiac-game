// Tomas Assignment 30th.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // library that allows me to read and write to the console
#include <Windows.h> // rest are libraries which makes it possible for me to play sound
#include <mmsystem.h>
#include <thread>

#pragma comment(lib, "Winmm.lib") // links the  Windows Multimedia API library to my program so i can use PlaySound function

using namespace std; // we are using the standard c++ output

void playSound() // defines a function which doesn't return a value
{
    PlaySound(TEXT("lol.wav"), NULL, SND_FILENAME | SND_SYNC); // plays a sound file instantly.
}

int main() // this is where the program starts running
{
    thread soundThread(playSound); // running the sound in a separate thread to allow the rest of my program to continue running
    system("color 0a"); // changes the console background and text colour 0-9 & A-F
    cout << ("Welcome to Horoscope69 :]\n"); // cout c(character)out(output) - the way of presenting text on the screen in c++. \n for a line break 
    cout << ("are you ready to find out  more about yourself ?\n");
    system("pause"); // keeping the console window open

    int day; // declaring an integer of whole numbers
    int month; // declaring an integer of whole numbers
    char again = 'Y'; // declaring an integer of a character

    while (again == 'y' || again == 'Y') // start of a loop

    { // those brackets represents a begining of a statement and is where the loop starts
        cout << ("Tell me the day you are born - (1-31)\n"); 
        cin >> day; // the program waits for you input 1-31
        cout << ("Tell me the month you are born - (1-12)\n");
        cin >> month; // the program waits for your input 1-12
        if ((day >= 22 && month == 12) || (day <= 19 && month == 1)) // the period of each zodiacal sign x12
        {
            cout << "Capricorn: Capricorns are said to be tenacious and pragmatic. At the same time,\n Capricorns are said to be sticklers for the rules and ferocious when upset." << endl;
            cout << "You are also disciplined, responsible, ambitious, and practical!" << endl; // similar purpose to \n + flushing the output buffer for immediate response
            system("pause");
        }
        if ((day >= 20 && month == 1) || (day <= 18 && month == 2))
        {
            cout << "Aquarius: Aquarians are said to be assertive and creative. Aquarians are also\n said to be impulsive loners." << endl;
            cout << "You are also innovative, humanitarian, independent, and quirky!" << endl;
            system("pause");
        }
        if ((day >= 19 && month == 2) || (day <= 20 && month == 3))
        {
            cout << "Pisces: A stereotypical Pisces is said to be an adventurous, compassionate\n person who may get a little too anxious or needy." << endl;
            cout << "You are also compassionate, artistic, intuitive, and gentle!" << endl;
            system("pause");
        }
        if ((day >= 21 && month == 3) || (day <= 19 && month == 4))
        {
            cout << "Aries: The rams of Aries are said to be confident and fiery people. However,\n they may butt heads with others because they are infamously impatient and honest with their opinions." << endl;
            cout << "You are also Energetic and ambitious, natural leader!" << endl;
            system("pause");
        }
        if ((day >= 20 && month == 4) || (day <= 20 && month == 5))
        {
            cout << "Taurus: Taurus bulls are said to be loyal and persistent. At the same time,\n these bulls are often stereotyped as being lazy and, appropriately, bullheaded." << endl;
            cout << "You are also strong-willed, practical, reliable, and sensual!" << endl;
            system("pause");
        }
        if ((day >= 21 && month == 5) || (day <= 20 && month == 6))
        {
            cout << "Gemini: People rocking the twins are said to be highly intelligent and \nsociable. On the other hand, they are also said to be superficial and indecisive." << endl;
            cout << "You are  also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 21 && month == 6) || (day <= 22 && month == 7))
        {
            cout << "Cancer: The crabs of Cancer are said to be charitable people and loyal \nfriends. On the other hand, they also tend to be blunt and are known to get … crabby when someone tries to get them out of their shells." << endl;
            cout << "You are also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 23 && month == 7) || (day <= 22 && month == 8))
        {
            cout << "Leo: Leo lions are said to be proud and brave while sometimes getting a\n little too arrogant or competitive." << endl;
            cout << "You are also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 23 && month == 8) || (day <= 22 && month == 9))
        {
            cout << "Virgo: Virgos are said to be diligent and organized. At the same time, \nVirgos are said to be overly critical perfectionists who tend to worry a lot." << endl;
            cout << "You are also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 23 && month == 9) || (day <= 22 && month == 10))
        {
            cout << "Libra:  Libra is famously the sign of clever extroverts. These social \nbutterflies are also said to be vain and hate making tough decisions." << endl;
            cout << "You are also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 23 && month == 10) || (day <= 21 && month == 11))
        {
            cout << "Scorpio: The scorpions of Scorpio are said to be magnetic thrill-seekers. \nScorpios are also often said to be envious and fascinated by the macabre." << endl;
            cout << "You are  also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        if ((day >= 22 && month == 11) || (day <= 21 && month == 12))
        {
            cout << "Sagittarius: Sagittarians are said to be highly independent adventurers who \nare always full of imagination. On the flip side, they are also said to be blunt and impatient." << endl;
            cout << "You are also adaptable, curious, communicative, and witty!" << endl;
            system("pause");
        }
        cout << "Go again ? (y/n) ";
        cin >> again; // waiting for you input, Y to continue again or any other keypress to finish here
    } // those brackets represents the end of the statement and is where the loop ends if u pressed anything different than Y
    cout << "Goodbye!" << endl; // saying goodbye if you pressed no
    soundThread.detach();
    return 0; // Indicates the success of the program.
}  
