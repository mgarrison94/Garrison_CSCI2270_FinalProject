#include "storyTree.h"

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
    storyNode *node1 = new storyNode;
    storyNode *node2 = new storyNode;
    storyNode *node3 = new storyNode;
    storyNode *node4 = new storyNode;
    storyNode *node5 = new storyNode;
    storyNode *node6 = new storyNode;
    storyNode *node7 = new storyNode;
    storyNode *node8 = new storyNode;
    storyNode *node9 = new storyNode;
    storyNode *node10 = new storyNode;
    storyNode *node11 = new storyNode;
    storyNode *node12 = new storyNode;
    storyNode *node13 = new storyNode;
    storyNode *node14 = new storyNode;
    storyNode *node15 = new storyNode;
    storyNode *node16 = new storyNode;
    storyNode *node17 = new storyNode;
    storyNode *node18 = new storyNode;
    storyNode *node19 = new storyNode;
    storyNode *node20 = new storyNode;
    storyNode *node21 = new storyNode;
    storyNode *node22 = new storyNode;
    storyNode *node23 = new storyNode;
    storyNode *node24 = new storyNode;
    storyNode *node25 = new storyNode;
    storyNode *node26 = new storyNode;
    storyNode *node27 = new storyNode;
    storyNode *node28 = new storyNode;
    storyNode *node29 = new storyNode;
    storyNode *node30 = new storyNode;
    storyNode *node31 = new storyNode;

    node1->parent=NULL;
    node1->choice= "";
    node1->index=-1;
    node1->text = "One morning, you (Leonidas the goat) are walking along the pasture fence when you notice a large hole.";
    node1->left = node2;
    node1->right = node3;

    node2->parent=node1;
    node2->choice= "go through the hole";
    node2->index=-1;
    node2->text = "You wriggle through the hole and begin walking. Before too long you find yourself in a large orchard.";
    node2->left = node4;
    node2->right = node5;

    node3->parent=node1;
    node3->choice= "stay in the pasture";
    node3->index=-1;
    node3->text = "You pass by the hole and instead head over to the food trough. There is hay inside, but only enough for one goat.";
    node3->left = node6;
    node3->right = node7;

    node4->parent=node2;
    node4->choice= "continue walking";
    node4->index=-1;
    node4->text = "Your journey continues and eventually you reach another fence, this one adjacent to a large black road.";
    node4->left = node8;
    node4->right = node9;

    node5->parent=node2;
    node5->choice= "eat the fallen fruit";
    node5->index=-1;
    node5->text = "You eat and eat, gorging yourself until you feel stuffed and your belly is noticeably plump.";
    node5->left = node10;
    node5->right = node11;

    node6->parent=node3;
    node6->choice= "eat the hay yourself";
    node6->index=-1;
    node6->text = "You eat the hay but don't feel quite satisfied. A few feet away, you notice a paper lying on the ground. There is a lot of text on it and it seems like it could be important.";
    node6->left = node12;
    node6->right = node13;

    node7->parent=node3;
    node7->choice= "bring the hay to Nibble, the goat you've been crushing on";
    node7->index=-1;
    node7->text = "Nibble is grateful for the hay and gobbles it happily. You, however, are still pretty hungry. Bearman the cat walks by and hears your stomach growling. He tells you he saw some food on the other side of the farm.";
    node7->left = node14;
    node7->right = node15;

    node8->parent=node4;
    node8->choice= "hop the fence";
    node8->index=-1;
    node8->text = "You make it over the fence to the road. The asphalt smells acrid and you worry that it may not be safe here.";
    node8->left = node16;
    node8->right = node17;

    node9->parent=node4;
    node9->choice= "turn back toward the farm";
    node9->index=-1;
    node9->text = "You leave the fence but take a slightly different path than the way you got there. As you're walking, you stumble upon a stream. You hadn't realized just how thirsty and hot you feel.";
    node9->left = node18;
    node9->right = node19;

    node10->parent=node5;
    node10->choice= "try to continue on";
    node10->index=-1;
    node10->text = node4->text;
    node10->left = node20;
    node9->right = node21;

    node11->parent=node5;
    node11->choice= "take a nap in the shade of the tree";
    node11->index=-1;
    node11->text = "You sleep in a peaceful, food-fueled haze for many hours. When you awake, it is the middle of the night.";
    node11->left = node22;
    node11->right = node23;

    node12->parent=node6;
    node12->choice= "eat the paper";
    node12->index=-1;
    node12->text = "The paper is delicious. Just as you're finishing up, the farmer sees you and he does not look pleased.";
    node12->left = node24;
    node12->right = node25;

    node13->parent=node6;
    node13->choice= "grasp the paper with your prehensile goat tongue and bring it to the farmer";
    node13->index=-1;
    node13->text = "The farmer is delighted to have the paper back and praises you. As a reward, he gives you an entire bag of oats to munch on.";
    node13->left = node26;
    node13->right = node27;

    node14->parent=node7;
    node14->choice= "leave Nibble and follow Bearman to the food";
    node14->index=-1;
    node14->text = "Bearman leads you to a tasty pile of garbage, but on the way over he seems to be acting a little strange - drooling a lot and...was that a growl?";
    node14->left = node28;
    node14->right = node29;

    node15->parent=node7;
    node15->choice= "stay with Nibble and hang out";
    node15->index=-1;
    node15->text = "Nibble seems glad to have your company and wonders if you'd like to join her in her morning ritual of climbing rocks and baaing on top of them. You still feel very hungry";
    node15->left = node30;
    node15->right = node31;

    node16->parent=node8;
    node16->choice= "stay near the road";
    node16->index=-1;
    node16->text = "A car comes along with a couple of stoners inside. They seem nice enough, so you decide to get in the car and join them for a desert trek.";
    node16->left = NULL;
    node16->right = NULL;

    node17->parent=node8;
    node17->choice= "dash across the road and make a run for it";
    node17->index=-1;
    node17->text = "You successfully cross the road and start heading up the hill on the other side. When you reach the top, you find that the valley below is a goat haven - rolling hills, rocks to climb, and grasses and garbage to eat as far as the eye can see.";
    node17->left = NULL;
    node17->right = NULL;

    node18->parent=node9;
    node18->choice= "drink from the spring";
    node18->index=-1;
    node18->text = "The cool water is wonderful on your parched throat, but something seems a little off about it. As you head off again on your trek, you trip and careen uncontrollably down a rocky hill. When you reach the bottom of the hill completely unharmed, you realize that the spring water has made you immortal.";
    node18->left = NULL;
    node18->right = NULL;

    node19->parent=node9;
    node19->choice= "plunge into the spring";
    node19->index=-1;
    node19->text = "You feel refreshed and cool off easily. The water leaches all of the muck off of your fur and leaves it gleaming. You emerge from the spring and gaze back into its mirror-like water only to realize that the spring water has transformed you into the best-looking goat in the world.";
    node19->left = NULL;
    node19->right = NULL;

    node20->parent=node10;
    node20->choice= "hop the fence";
    node20->index=-1;
    node20->text = "You try your best, but your plump belly prevents you from making it over the fence. You hear the whir of an engine and see the farmer approaching on his tractor. He's not too pleased that you ran off, but you're just happy to get a ride back home.";
    node20->left = NULL;
    node20->right = NULL;

    node21->parent=node10;
    node21->choice= "turn back";
    node21->index=-1;
    node21->text = "You hustle back home and work off your belly full of fruit. When you reach the hole in the fence, you are just barely skinny enough to slip back through. The farmer is none the wiser as to your little adventure.";
    node21->left = NULL;
    node21->right = NULL;

    node22->parent=node11;
    node22->choice= "spend the rest of the night in the orchard";
    node22->index=-1;
    node22->text = "You wake at dawn to the sound of birds laughing at you. All of that fruit you ate had to go somewhere, and the evidence is right beneath your tail: a monument to both your gluttony and your digestive resilience.";
    node22->left = NULL;
    node22->right = NULL;

    node23->parent=node11;
    node23->choice= "go back to the farm";
    node23->index=-1;
    node23->text = "It's pitch black around you but you manage to make your way back to the pasture. However, you cannot find the hole in the fence through which you escaped. Out of desperation, you baa loudly for help and wake the whole barnyard. Your goat friends help you back in, but the roosters take your wake-up call as an affront to their art.";
    node23->left = NULL;
    node23->right = NULL;

    node24->parent=node12;
    node24->choice= "run away from the farmer";
    node24->index=-1;
    node24->text = "You scamper away but in your hurry forget to avoid the pigsty. You slip and belly flop into the mud. Everyone laughs as you struggle to get back up and the farmer thinks your embarrassment is punishment enough.";
    node24->left = NULL;
    node24->right = NULL;

    node25->parent=node12;
    node25->choice= "regurgitate the paper";
    node25->index=-1;
    node25->text = "You are successful in bringing back up the paper. The farmer is disgusted and tells you to never do that again, but appreciates your effort and forgives you.";
    node25->left = NULL;
    node25->right = NULL;

    node26->parent=node13;
    node26->choice= "eat all of the oats yourself";
    node26->index=-1;
    node26->text = "You gorge yourself on the oats. Nibble walks by and judges you hardcore.";
    node26->left = NULL;
    node26->right = NULL;

    node27->parent=node13;
    node27->choice= "share the oats with the other goats";
    node27->index=-1;
    node27->text = "The other goats are delighted with both the oats and your selflessness. You are a goat hero.";
    node27->left = NULL;
    node27->right = NULL;

    node28->parent=node14;
    node28->choice= "eat the garbage anyway";
    node28->index=-1;
    node28->text = "When you turn your back to munch on the trash, you hear a noise behind you and suddenly everything goes black. Turns out, Bearman was a bear and now you've become the food :(";
    node28->left = NULL;
    node28->right = NULL;

    node29->parent=node14;
    node29->choice= "confront Bearman about the fact that now that you're up close to him, he's pretty obviously just a bear with fake whiskers and cat's tail";
    node29->index=-1;
    node29->text = "Bearman awkwardly acknowledges that he is, in fact, a bear and led you here to eat you. He feels bad that he was about to eat an intelligent animal. You forgive him and happily eat garbage together.";
    node29->left = NULL;
    node29->right = NULL;

    node30->parent=node15;
    node30->choice= "politely decline";
    node30->index=-1;
    node30->text = "Nibble goes off to climb a rock alone, and finds a delicacy at the top - a tin can. When you find the treasure waiting for you in your favorite napping spot later on, you realize that Nibble has a crush on you, too. You, of course, eat the can.";
    node30->left = NULL;
    node30->right = NULL;

    node31->parent=node15;
    node31->choice= "agree to climb";
    node31->index=-1;
    node31->text = "While summiting the rock, you begin to feel light-headed. The lack of breakfast is taking its toll. Suddenly, you wake up with an achy head. Nibble explains that you fainted while climbing. You're embarrassed but Nibble seems to find it endearing and enjoys nursing you back to health.";
    node31->left = NULL;
    node31->right = NULL;

    root = node1;
}

void storyTree::adventure()
{
    storyNode *tmp = root;
    while (tmp!=NULL)
    {
        cout<<tmp->text<<endl;
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
        else
        {
            cout<<"Enter a valid option, either a or b."<<endl;
        }
    }
}

storyNode* storyTree::addNode(std::string text, std::string choice, storyNode* par)
{
    storyNode *newnode = new storyNode;
    newnode->parent = par;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->choice = choice;
    newnode->text = text;
    return newnode;
}

void storyTree::printAdventure()
{
    storyNode *tmp = root;
    cout<<tmp->text;
    cout<<tmp->left->text;
    cout<<tmp->right->text;
}
