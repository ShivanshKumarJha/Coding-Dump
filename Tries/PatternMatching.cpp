#include <string>
#include <vector>

class TrieNode {
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }

    void insertSuffixes(TrieNode* root, string pattern) {
        for (int i = 0; i < pattern.size(); i++) {
            string temp = pattern.substr(i);
            insertWord(temp);
        }
    }

    bool isPresent(TrieNode* root, string word) {
        TrieNode* t = root;

        for (char ch : word) {
            int idx = ch - 'a';
            if (t->children[idx] == NULL) return false;
            t = t->children[idx];
        }
        return true;
    }

    bool patternMatching(vector<string> vect, string pattern) {
        // Write your code here
        for (int i = 0; i < vect.size(); i++) {
            insertSuffixes(root, vect[i]);
            if (isPresent(root, pattern)) return true;
        }
        return false;
    }
};