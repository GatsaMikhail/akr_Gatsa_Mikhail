#include <iostream>
#include <set>

using namespace std;

int cnt = 0;

typedef struct TNode* PNode;
typedef struct TNode{
    int data;
    PNode left;
    PNode right;
} TNode;

PNode makeTree(string t){
    PNode Tree;
    Tree = new struct TNode;
    Tree -> data = t[0];
    Tree -> left = NULL;
    Tree -> right = NULL;

return Tree;
}

void sendData(string t, PNode tree, int i){
    if (tree -> data > t[i]){
        if (tree -> left == NULL){
            tree -> left = makeTree(t);
        }
        else{
            sendData(t, tree -> left, i);
        }
    }
    else if(tree->data < t[i]){
        if (tree->right == NULL){
            tree->right = makeTree(t);
        }
        else{
            sendData(t, tree->right);
        }
    }
}

void lookfor(PNode tree){
    ++cnt;
    if (tree -> left != 0){
        lookfor(tree -> left);

        }
    if (tree -> right != 0)
        lookfor(tree->right);
}

int main(){
    PNode T;
    int i=0;
    string t;
    cin >> t;
    T = makeTree(t);
    while(1){
        cin >> t;
        if (t != 0){
            sendData(t, T, i);
        }
        else
            break;
++i;
}
    lookfor(T);
    cout << cnt << endl;
    return 0;
}
