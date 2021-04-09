#include <iostream>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    BinaryTree* bt = new BinaryTree();
    bt->add(5);
    bt->add(2);
    bt->add(13);
    bt->add(17);
    bt->visitInOrder();
    cout << endl;
    bt->visitPreOrder();
    cout << endl;
    bt->visitPostOrder();
    return 0;
}