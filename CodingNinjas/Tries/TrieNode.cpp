#include<bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode** children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode*[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode* root, string word) {
        if (word.size() == 0) {root->isTerminal = true; return;}

        int index = word[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        insertWord(root, word);
    }

    bool search(TrieNode* root, string word) {
        if (word.size() == 0) {
            if (root->isTerminal == false) {return false;}
            else {return true;}
        }

        int index = word[0] - 'a';
        TrieNode* child = root->children[index];

        if (root->children[index] == NULL) {return false;}

        return search(child, word.substr(1)) && true;
    }

    bool search(string word) {
        // Write your code here
        return search(root, word);
    }

    void removeWord(TrieNode* root, string word) {
        if (word.size() == 0) {
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child = root->children[index];

        if (root->children[index] == NULL) {return;}

        if (root->children[index] != NULL) {
            removeWord(child, word.substr(1));
        }

        //If children Node is useless or not
        if (child->isTerminal == false) {
            for (int i = 0; i < 26; i++) {
                if (child->children[i] != NULL) {return;}
            }
            delete child;
            root->children[index] = NULL;
        }
    }

    void removeWord(string word) {
        removeWord(root, word);
    }
};

int main() {
    cout << boolalpha;
    Trie t;
    t.insertWord("abc");
    t.insertWord("are");
    t.insertWord("dot");

    cout << t.search("are") << endl;

    t.removeWord("and");
    cout << t.search("and") << endl;
    return 0;
}