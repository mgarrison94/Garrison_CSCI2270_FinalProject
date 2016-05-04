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
        void allOutcomes();
        int recIndex = 0;
        void adventure();
        void printAdventure(storyNode *stop);
        void whatIf(storyNode *stop);
        void random();
        void allOutRecursive(storyNode *node);
        void initialTree();
        void storyGenre(string letter);
        storyNode *finish;
        vector <storyNode*> path;
        storyNode *root;
        storyNode* backtrack(storyNode *node);
        storyNode* randomChoice(storyNode* current);
        storyNode* getFinish();
    protected:
    private:

};

#endif // STORYTREE_H
