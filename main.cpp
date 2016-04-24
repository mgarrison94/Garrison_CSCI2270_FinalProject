#include <iostream>
#include "storyTree.h"

using namespace std;

int main()
{
    storyTree T;
    T.initialTree();
    while (true)
    {
        cout<<"Choose Your Own Adventure"<<endl;
        cout<<"1. Play adventure"<<endl;
        cout<<"2. Print completed adventure"<<endl;
        cout<<"3. What if?"<<endl;
        cout<<"4. Auto-complete an adventure"<<endl;
        cout<<"5. Create new adventure"<<endl;
        cout<<"6. Quit"<<endl;
        string choice;
        cin>>choice;
        if (choice=="1")
        {
            T.adventure();
        }
        else if (choice=="2")
        {
            T.printAdventure();
        }
        else if (choice=="3")
        {
            //What if
        }
        else if (choice=="4")
        {
            //auto
        }
        else if (choice=="5")
        {
            //new tree
        }
        else if (choice=="6")
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
