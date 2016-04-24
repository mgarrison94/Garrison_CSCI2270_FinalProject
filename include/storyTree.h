#ifndef STORYTREE_H
#define STORYTREE_H
#include <iostream>

using namespace std;

struct storyNode
    {
        storyNode* left;
        storyNode* right;
        storyNode* parent;
        string text;
        int index;
        string choice;
    };

class storyTree
{
    public:
        storyTree();
        virtual ~storyTree();
        void adventure();
        void printAdventure();
        void whatIf(int index);
        void backtrack(storyNode node);
        void random(storyNode *root);
        void allOutcomes(storyNode *root);
        void initialTree();
        storyNode *root;
    protected:
    private:
        storyNode* addNode(std::string text, std::string choice, storyNode* par);
        void deleteNode(string text);
};

#endif // STORYTREE_H
