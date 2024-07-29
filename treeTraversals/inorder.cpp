#include <iostream>
#include <queue>

class Node{
    public:
    int value;
    Node* right;
    Node* left;

    Node(int value){
        this->value=value;
        left=right=nullptr;
    }
};

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    std::cout << root->value << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if (root == nullptr) return;
    std::cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
     std::cout<<root->value<<" ";
}

void levelByLevel(Node* root) {
    if (root == nullptr) return;

    std::queue<Node*> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        Node* current = nodes.front();
        nodes.pop();
        std::cout << current->value << " ";

        if (current->left != nullptr) nodes.push(current->left);
        if (current->right != nullptr) nodes.push(current->right);
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

   std::cout << "Inorder Traversal: ";
    inorder(root);
    std::cout << std::endl;

    std::cout << "Preorder Traversal: ";
    preorder(root);
    std::cout <<std::endl;

    std::cout << "Postorder Traversal: ";
    postorder(root);
    std::cout << std::endl;

    std::cout << "Level Order Traversal: ";
    levelByLevel(root);
    std::cout << std::endl;

    return 0;
}