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

        storyNode(){};
        storyNode(string in_choice, string in_text) {
            choice = in_choice;
            text = in_text;
            left = NULL;
            right = NULL;
        }
        storyNode(string in_choice, string in_text, storyNode* in_left, storyNode* in_right) {
            choice = in_choice;
            text = in_text;
            left = in_left;
            if (in_left) {
                left->parent = this;
            }
            right = in_right;
            if (in_right) {
                right->parent = this;
            }
        };
    };

class storyTree
{
    public:
        storyTree();
        virtual ~storyTree();
        void allOutcomes();

        void initialTree();
        void adventure();
        storyNode* getFinish();
        void printAdventure(storyNode *stop);
        void whatIf(storyNode *stop);
        void random();
        void storyGenre(string letter);
    protected:
    private:
        storyNode *finish;
        vector <storyNode*> path;
        storyNode *root;
        int recIndex = 0;
        storyNode* backtrack(storyNode *node);
        void allOutRecursive(storyNode *node);
        storyNode* randomChoice(storyNode* current);
};

#endif // STORYTREE_H
