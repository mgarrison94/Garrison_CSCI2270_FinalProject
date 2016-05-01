#include "storyTree.h"
#include "stdlib.h"
#include "ctime"
#include "cstdlib"
#include <vector>

storyTree::storyTree()
{
    //ctor
}

storyTree::~storyTree()
{
    //dtor
}

void storyTree::initialTree()
{
    storyNode* node31 = new storyNode("agree to climb", "While summiting the rock, you begin to feel light-headed. The lack of breakfast is taking its toll. Suddenly, you wake up with an achy head. Nibble explains that you fainted while climbing. You're embarrassed but Nibble seems to find it endearing and enjoys nursing you back to health.");
    storyNode* node30 = new storyNode("politely decline","Nibble goes off to climb a rock alone, and finds a delicacy at the top - a tin can. When you find the treasure waiting for you in your favorite napping spot later on, you realize that Nibble has a crush on you, too. You, of course, eat the can.");
    storyNode* node29 = new storyNode("confront Bearman about the fact that it's becoming increasingly obvious that he's actually just a bear with fake whiskers and cat's tail","Bearman awkwardly acknowledges that he is, in fact, a bear and led you here to eat you. He feels terrible about planning to maul an intelligent animal. You forgive him and happily eat garbage together.");
    storyNode* node28 = new storyNode("eat the garbage anyway","When you turn your back to munch on the trash, you hear a noise behind you and suddenly everything goes black. Turns out, Bearman was a bear and now you've become his tasty pile of food.");
    storyNode* node27 = new storyNode("share the oats with the other goats","The other goats are delighted with both the oats and your selflessness. You are a goat hero.");
    storyNode* node26 = new storyNode("eat all of the oats yourself","You gorge yourself on the oats. Nibble walks by and judges you hardcore.");
    storyNode* node25 = new storyNode("regurgitate the paper","You are successful in bringing back up the paper. The farmer is disgusted and tells you to never do that again, but appreciates your effort and forgives you.");
    storyNode* node24 = new storyNode("run away from the farmer","You scamper away but in your hurry forget to avoid the pigsty. You slip and belly flop into the mud. Everyone laughs as you struggle to get back up and the farmer thinks your embarrassment is punishment enough.");
    storyNode* node23 = new storyNode("go back to the farm","It's pitch black around you but you manage to make your way back to the pasture. However, you cannot find the hole in the fence through which you escaped. Out of desperation, you baa loudly for help and wake the whole barnyard. Your goat friends help you back in, but the roosters take your wake-up call as an affront to their art.");
    storyNode* node22 = new storyNode("spend the rest of the night in the orchard","You wake at dawn to the sound of birds laughing at you. All of that fruit you ate had to go somewhere, and the evidence is piled up beneath your tail: a monument to both your gluttony and your digestive resilience.");
    storyNode* node21 = new storyNode("lay helpless","You cower in fear as the noise gets closer and closer. Just when you've given up all hope, the farmer's daughter appears. She sees your fruit-filled belly and pets you until feel better. You walk back to the farm together.");
    storyNode* node20 = new storyNode("baa for help","You bleat as loudly as you can. The creature approaches and it turns out to be the farmer's daughter. She's laughing and holding out her phone, recording your goatish screams. She carries your plumpness back to the farm. You are later featured in a Taylor Swift music video.");
    storyNode* node19 = new storyNode("plunge into the spring","You feel refreshed and cool off easily. The water leaches all of the muck off of your fur and leaves it gleaming. You emerge from the spring and gaze back into its mirror-like water only to realize that the spring water has transformed you into the best-looking goat in the world.");
    storyNode* node18 = new storyNode("drink from the spring","The cool water is wonderful on your parched throat, but something seems a little off about it. As you head off again on your trek, you trip and careen uncontrollably down a rocky hill. When you reach the bottom of the hill completely unharmed, you realize that the spring water has made you immortal.");
    storyNode* node17 = new storyNode("rudely refuse, in spite of how adorable it would be","Debian is disappointed in your selfishness and tells you how inconsiderate you're being. In the middle of his sentence, you hear a wail from nearby. You and Debian race to the origin of the sound and find Windows98 stuck in a hole. Learning from your inconsiderateness earlier, you help Windows98 out and give the two bunnies a ride back to the farm.");
    storyNode* node16 = new storyNode("let him hop up","From atop your back, Debian soon notices Windows98 stuck in a tree, apparently spooked. You tell him not to worry and bound up into the branches. The two bunnies are in awe of your abilities and grateful to be reunited. You give them a ride back to the farm where they tell everyone of your feat.");
    storyNode* node15 = new storyNode("stay with Nibble and hang out","Nibble seems glad to have your company and wonders if you'd like to join her in her morning ritual of climbing rocks and baaing on top of them. You still feel very hungry.",node30,node31);
    storyNode* node14 = new storyNode("leave Nibble and follow Bearman to the food","Bearman leads you to a tasty pile of garbage, but on the way over he seems to be acting a little strange - drooling a lot and...are cats usually that large?",node28,node29);
    storyNode* node13 = new storyNode("grasp the paper with your prehensile goat tongue and bring it to the farmer","The farmer is delighted to have the paper back and praises you. As a reward, he gives you an entire bag of oats to munch on.",node26,node27);
    storyNode* node12 = new storyNode("eat the paper","The paper is delicious. Just as you're finishing up, the farmer sees you and he does not look pleased.",node24,node25);
    storyNode* node11 = new storyNode("take a nap in the shade of the tree","You sleep in a peaceful, food-fueled haze for many hours. When you awake, it is the middle of the night.",node22,node23);
    storyNode* node10 = new storyNode("try to continue on","You plod onwards, but soon the cramps from your stomach become too much to bear. You lay down to give yourself a rest, but hear something approaching. It sounds large and you're in no position to defend yourself.",node20,node21);
    storyNode* node9 = new storyNode("run away","You sprint away from the danger and/or adorableness but take a slightly different path than the way you got there. As you're fleeing, you stumble upon a spring. You hadn't realized just how thirsty and hot you feel.",node18,node19);
    storyNode* node8 = new storyNode("approach the animal","You cautiously move closer to the source of the rustling and find...a bunny! He introduces himself as Debian and tells you that he's he searching for his friend, Windows98, who got lost exploring outside the pasture earlier this morning. He wonders if you might let him hop on your back to get a better vantage point.",node16,node17);
    storyNode* node7 = new storyNode("bring the hay to Nibble, the goat you've been crushing on","Nibble is grateful for the hay and gobbles it happily. You, however, are still pretty hungry. Bearman the cat walks by and hears your stomach growling. He tells you he saw some food on the other side of the farm.",node14,node15);
    storyNode* node6 = new storyNode("eat the hay yourself","You eat the hay but don't feel quite satisfied. A few feet away, you notice a paper lying on the ground. There is a lot of text on it and it seems like it could be important.",node12,node13);
    storyNode* node5 = new storyNode("eat the fallen fruit","You eat and eat, gorging yourself until you feel stuffed and your belly is noticeably plump.",node10,node11);
    storyNode* node4 = new storyNode("continue walking","You trudge on. After a few minutes, you notice some movement in the grass ahead. You sniff the air and realize that it's a rabbit...or maybe a snake? You're not sure, they smell pretty similar.",node8,node9);
    storyNode* node3 = new storyNode("stay in the pasture","You pass by the hole and instead head over to the food trough. There is hay inside, but only enough for one goat.",node6,node7);
    storyNode* node2 = new storyNode("go through the hole","You wriggle through the hole and begin walking. Before too long you find yourself in a large orchard.",node4,node5);
    storyNode* node1 = new storyNode("","One morning, you (Linus the goat) are walking along the pasture fence when you notice a large hole.",node2,node3);

    storyTree::root = node1;
}

void storyTree::adventure()
{
    storyTree::printGoatImage();
    cout<<"Adventure Mode"<<endl;
    cout<<"Press (g) to go back a step, (r) to choose randomly, or (q) to quit at any time"<<endl;
    cout<<endl;
    storyNode *tmp = root;

    while (tmp->left!=NULL)
    {
        cout<<tmp->text<<endl;
        path.push_back(tmp);
        cout<<"Do you want to (a) "<<tmp->left->choice<<" or (b) "<<tmp->right->choice<<endl;
        string input;
        cin>>input;
        if (input=="a")
        {
            tmp = tmp->left;
        }
        else if (input=="b")
        {
            tmp = tmp->right;
        }
        else if(input=="r")
        {
            tmp = randomChoice(tmp);
        }
        else if(input=="g")
        {
            if (tmp->parent!=NULL)
            {
                path.pop_back();
                tmp = backtrack(tmp);
            }
            else
            {
                cout<<"Can't backtrack from here."<<endl;
            }
        }
        else if(input=="q")
        {
            return;
        }
        else
        {
            cout<<"Enter a valid option, either a or b."<<endl;
        }
    }
    cout<<tmp->text<<endl;
    finish = tmp;
    cout<<endl;
}

storyNode* storyTree::getFinish()
{
    return finish;
}

void storyTree::printAdventure(storyNode *stop)
{
    if (stop->left!=NULL)
    {
        cout<<"You must play the adventure before you can print out your journey"<<endl;
        cout<<endl;
    }
    else
    {
        storyTree::printGoatImage();
        for (int i=0;i<path.size();i++)
        {
            cout<<path[i]->text<<endl;
        }
    }
}

void storyTree::whatIf(storyNode *stop)
{
    if (stop->left!=NULL)
    {
        cout<<"You must play the adventure before you can see what would have happened with a different choice"<<endl;
    }
    else
    {
        cout<<"If you had chosen differently, this would have been your fate: "<<endl;
        cout<<endl;
        if (stop == stop->parent->left)
        {
            cout<<path[3]->right->text<<endl;
        }
        else if (stop==stop->parent->right)
        {
            cout<<path[3]->left->text<<endl;
        }
    }
}

void storyTree::random()
{
    storyTree::printGoatImage();
    storyNode *tmp = root;
    srand(time(NULL));
    while (tmp->left!=NULL)
    {
        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        int option = rand() %2;
        if (option==0)
        {
            cout<<tmp->left->choice<<endl;
            tmp = tmp->left;
        }
        else
        {
            cout<<tmp->right->choice<<endl;
            tmp = tmp->right;
        }
        cout<<endl;
    }
    cout<<tmp->text<<endl;
    cout<<endl;
}

void storyTree::storyGenre(string letter)
{
    storyNode *tmp = root;
    if (letter=="a")
    {
        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;

    }
    else if (letter=="b")
    {
        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
    }
    else if (letter=="c")
    {
        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
    }
    else if (letter=="d")
    {
        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->right->choice<<endl;
        tmp = tmp->right;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
        cout<<"You choose to ";
        cout<<tmp->left->choice<<endl;
        tmp = tmp->left;

        cout<<tmp->text<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Enter a valid entry."<<endl;
    }

}

storyNode* storyTree::backtrack(storyNode *current)
{
    current = current->parent;
    return current;
}

void storyTree::allOutcomes()
{
    storyNode *node = root;
    allOutRecursive(node);
}

void storyTree::allOutRecursive(storyNode* node)
{
    if (node->left!=NULL)
            allOutRecursive(node->left);
    if (node->left==NULL)
    {
        recIndex++;
        cout<<"Outcome "<<recIndex<<endl;
        cout<<node->text<<endl;
        cout<<endl;
    }
    if (node->right!=NULL)
        allOutRecursive(node->right);
}

storyNode* storyTree::randomChoice(storyNode *current)
{
    srand(time(NULL));
    int option = rand() %2;
    if (option==0)
    {
        current = current->left;
        return current;
    }
    else
    {
        current = current->right;
        return current;
    }
}

void storyTree::printGoatImage() {
    cout<<"      .(,"<<endl;
    cout<<"       /(,      *(("<<endl;
    cout<<"/*,     /*    *((   ,//."<<endl;
    cout<<".((///.,(#%%%%#/, */(#/"<<endl;
    cout<<"  ./(#,*%&&&&%(,,%##(*"<<endl;
    cout<<"     //,#&&&**/##."<<endl;
    cout<<"     .#*###%%//#((/"<<endl;
    cout<<"      #/(####/%%###/,                                           /(#(#."<<endl;
    cout<<"      (*((((/*%#(##(((*,                          ..       ./(#%&&%#(."<<endl;
    cout<<"      ,/##(/,/####%###((##((##(/*.. .,(((((((####((#####(, %&%&&(/."<<endl;
    cout<<"       ,(#**#(###%%%######%%%%###%%######%######%###%%%%###%&%(*"<<endl;
    cout<<"        /#/,(##&#%%%%#%#%%%%%####%&%%%&%%%%&&&%%%%%%#%%###*,"<<endl;
    cout<<"            .(###%%%%%%%%&%&%%%%%#%#&#&&%&%%#%#%####%%%##%%#%*"<<endl;
    cout<<"             .##%#%%%%%&&%&&%%%%%%%%%&%%#&&&%&&%#%%#%#%%#####,"<<endl;
    cout<<"              (###%%%&&&&&&%%&%%%%%%&%%%%%%%&%&%%#%%%%%%%####."<<endl;
    cout<<"              (#%%%%%&&&&&%&&&%%%%%%&&%%&%%#&%%%&%#%%%%%&&%%###"<<endl;
    cout<<"              (##%%%%%&&&&&&%&%%&%%%&&&%%%%%%%%%&%%%#%#%&%%&%#("<<endl;
    cout<<"              (#%%%%%%%%&&%%%%%%%%%%%&&&&&%&%&%%%%%#%%&%&%%%%#%*"<<endl;
    cout<<"              (#%&&%%%%%%%%%%%%%%%%%%%&&&%&%%%%&%%%%%%&&&&%%%%&%."<<endl;
    cout<<"              *#%&&&%%%%%%%%%%%&&&%#%%%%&&&&&&%&%&&&&@%&%&%%%%%#(,"<<endl;
    cout<<"             .,(%%&&&%%%&%%%%%%%&%%%%%%&%%&%%&%%%%%%#%%%%%%%&&%((/."<<endl;
    cout<<"              */(#%#%%%%%%%&&%&%%%%&%&%%%%%%%%%###(//((%%%%#&%%#(/*,"<<endl;
    cout<<"              .,(##(((##((%%%#%%%%#%%%#####(((((//***///*(#%#%##((*.."<<endl;
    cout<<"              .*#(((/((. /######(,.*,*,,....,*****////**,*(#####(/*"<<endl;
    cout<<"                /%#//((. /###%##*                .*///*..***..*/#(,"<<endl;
    cout<<"                ,////*. .%%%&%%/                  *///.         **,."<<endl;
    cout<<"                .,//*   ,*(#%(.                   ///*          **,."<<endl;
    cout<<"                .*//    ,/##*.                   ,//*.          ,*,,"<<endl;
    cout<<"                **/      *#*                    .///*           ,**,"<<endl;
    cout<<"               /**/     *#**                   .*///.           .*,,"<<endl;
    cout<<"               ,*/*     ***,                  ./(/*.             /*,"<<endl;
    cout<<"              ,*//.    .*,,,                  /&%#.              ,*/."<<endl;
    cout<<"             ,**/,    .*,,,,                                      ,"<<endl;
    cout<<"            ,*(((    */***,"<<endl;
    cout<<"            .***,   ,%#%#,"<<endl;
}
