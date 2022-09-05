
#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int count= 0;
    bool keepLooping = true;
    int choice;
    int num1;
    int num2;
    int ans;
    int total;


    cout << "*********************************************" <<endl;
    cout << "*                                               *" <<endl;
    cout << "*          PROJECT BY:ABDULLAH AL MAHADI        *" <<endl;
    cout << "*                                               *" <<endl;
    cout << "*********************************************" <<endl <<endl<<endl;
    cout << "*****   WELCOME TO MATH GAME     ********" << endl<<endl;
    cout << "YOU WILL BE TESTED WITH SOME EASIEST MATH PROBLEM " << endl<<endl;
    cout << "THE GAME WILL BE ON AND ON UNTILL YOU CHOOSE EXIT"<<endl<<endl;
    cout << "************    GOOD LUCK     **********" <<endl<<endl<<endl;



    num1 = rand() % 50;
    num2 = rand() % 50 + 2;




        cout << "-- CHOICE TABLE --" << endl;
        cout << "1: For Summetion" << endl;
        cout << "2: For Subtraction" << endl;
        cout << "3: For Multification" << endl;
        cout << "4: For Dividation" << endl;
        cout << "0: For Exit" << endl<<endl;




    while (keepLooping)
    {


        cout << "Enter your choice: ";


        cin >> choice;

        switch (choice)
        {
        case 1:
            cout <<"What is"<< num1 <<"+" << num2 <<"=";
            cin >>ans;
            total=num1+num2;

            if (ans == num1 + num2)
            {
                cout << "Correct answer" << endl;
            }
            else
            {
                cout << "Wrong answer, please try again" << endl;
            }
            break;



        case 2:
            cout <<"What is"<< num1 <<"-" << num2 <<"=";
            cin >>ans;
            total=num1-num2;

            if (ans == num1 - num2)
            {
                cout << "Correct answer" << endl;
            }
            else
            {
                cout << "Wrong answer, please try again" << endl;
            }
            break;


        case 3:
            cout <<"What is"<< num1 <<"*" << num2 <<"=";
            cin >>ans;
            total=num1*num2;

            if (ans == num1 * num2)
            {
                cout << "Correct answer" << endl;
            }
            else
            {
                cout << "Wrong answer, please try again" << endl;
            }
            break;


        case 4:
            cout <<"What is"<< num1 <<"/" << num2 <<"=";
            cin >>ans;
            total=num1/num2;

            if (ans == num1 / num2)
            {
                cout << "Correct answer" << endl;
            }
            else
            {
                cout << "Wrong answer, please try again" << endl;
            }
            break;


        default:
            cout << "you chose to exit" << endl;
        }



        cout << "Enter 'e' to exit this loop or any other character to continue: ";
        int x = 0;
        cin >> x;

        if (x == 0)
            keepLooping = false;

        ++count;
    }

    return 0;
}
