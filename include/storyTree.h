#ifndef STORYTREE_H
#define STORYTREE_H
#include <iostream>
#include <vector>

using namespace std;

struct storyNode
    {
        storyNode* left;
        storyNode* right;
        storyNode* parent;
        string text;
        string choice;
    };

class storyTree
{
    public:
        storyTree();
        virtual ~storyTree();
        void adventure();
        void printAdventure(storyNode *stop);
        void whatIf(storyNode *stop);
        storyNode* backtrack(storyNode *node);
        void random();
        void allOutcomes();
        void initialTree();
        void storyGenre(string letter);
        storyNode* randomChoice(storyNode* current);
        storyNode* getFinish();
        storyNode* getRoot();

    protected:
    private:
        void deleteNode(string text);
        storyNode *finish;
        vector <storyNode*> path;
        storyNode *root;
};

#endif // STORYTREE_H
