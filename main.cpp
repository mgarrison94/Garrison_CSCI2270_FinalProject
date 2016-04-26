#include <iostream>
#include "storyTree.h"
#include "stdlib.h"
#include "ctime"
#include "cstdlib"

using namespace std;

int main()
{
    storyTree T;
    T.initialTree();
    while (true)
    {
        cout<<"Choose Your Own Adventure Main Menu"<<endl;
        cout<<"1. Play adventure"<<endl;
        cout<<"2. Print completed adventure"<<endl;
        cout<<"3. What if?"<<endl;
        cout<<"4. Auto-complete an adventure"<<endl;
        cout<<"5. Show all possible outcomes"<<endl;
        cout<<"6. I'm in the mood for..."<<endl;
        cout<<"7. Explain menu options"<<endl;
        cout<<"8. Quit"<<endl;
        string choice;
        cin>>choice;
        if (choice=="1")
        {
            T.adventure();
        }
        else if (choice=="2")
        {
            T.printAdventure(T.getFinish());
        }
        else if (choice=="3")
        {
            T.whatIf(T.getFinish());
        }
        else if (choice=="4")
        {
            T.random();
        }
        else if (choice=="5")
        {
            T.allOutcomes();
        }
        else if(choice=="6")
        {
            cout<<"Are you in the mood for a story that is"<<endl;
            cout<<"(a) Heroic (b) Romantic (c) Magical (d) Unfortunate"<<endl;
            string input;
            cin>>input;
            T.storyGenre(input);
        }
        else if(choice=="7")
        {
            cout<<"Which menu option would you like to learn more about?"<<endl;
            string input;
            cin>>input;
            if (input=="1")
            {
                cout<<"This option lets you play the choose your own adventure game."<<endl;
            }
            else if (input=="2")
            {
                cout<<"This option shows you your full adventure once it has been completed."<<endl;
            }
            else if(input=="3")
            {
                cout<<"This option shows you what your fate would have been if you chose differently at the last step."<<endl;
            }
            else if(input=="4")
            {
                cout<<"This option auto-completes a random adventure and shows the results."<<endl;
            }
            else if(input=="5")
            {
                cout<<""<<endl;
            }
            else if (input=="6")
            {
                cout<<"This option shows you an adventure that fits the mood you're in."<<endl;
            }
            cout<<endl;
        }
        else if (choice=="8")
        {
            cout<<"Goodbye!"<<endl;
            break;
        }
        else
        {
            cout<<"Please enter a valid option."<<endl;
        }
    }
}
