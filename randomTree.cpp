#include <iostream>
#include <vector>
#include <queue>
#include <ctime>

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

template <typename T>
struct TreeNode {
    T value;
    std::vector<TreeNode<T>*> children;

    TreeNode(T val) : value(val) {}
};

template <typename T>
struct Tree {
    TreeNode<T>* root;

    Tree(TreeNode<T>* node) : root(node) {}

    ~Tree() {
        freeTree(root);
    }

   
    static TreeNode<T>* createRandomTree(int depth) {
        if (depth == 0) return nullptr;

        TreeNode<T>* node = new TreeNode<T>(getRandomNumber(1, 10)); 
        int numChildren = getRandomNumber(1, 3); 
        for (int i = 0; i < numChildren; ++i) {
            TreeNode<T>* child = createRandomTree(depth - 1);
            if (child != nullptr) {
                node->children.push_back(child);
            }
        }

        return node;
    }

    void levelOrderTraversal(TreeNode<T>* root) const {
        if (!root) return;

        std::queue<TreeNode<T>*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; ++i) {
                TreeNode<T>* node = q.front();
                q.pop();
                std::cout << node->value << " ";
                for (TreeNode<T>* child : node->children) {
                    q.push(child);
                }
            }
            std::cout << std::endl; 
        }
    }

private:
    
    void freeTree(TreeNode<T>* root) {
        if (!root) return;
        for (TreeNode<T>* child : root->children) {
            freeTree(child);
        }
        delete root;
    }
};

int main() {
    srand(time(0)); 

    int depth = getRandomNumber(1, 10);
    TreeNode<int>* root = Tree<int>::createRandomTree(depth);

    Tree<int> tree(root);

    std::cout << "Tree depth " << depth << ":" << std::endl;
    tree.levelOrderTraversal(root);

    return 0;
}
