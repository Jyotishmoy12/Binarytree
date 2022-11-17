#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{

    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for left"<<endl;
    root->left= buildtree(root->left);
    cout<<"enter data for in right"<<endl;
    root->right= buildtree(root->right);
}

int main()
{

    node *root = NULL;
    root = buildtree(root);

    return 0;
}
