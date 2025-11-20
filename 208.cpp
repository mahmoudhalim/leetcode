#include <string>
#include <unordered_map>
class Trie {
private:
  std::unordered_map<char, Trie *> children;
  int is_leaf;

public:
  Trie() { is_leaf = 0; }

  void insert(std::string word) {
    Trie *curr = this;
    for (char c : word) {
      if (curr->children.count(c) == 0) {
        Trie *Node = new Trie();
        curr->children[c] = Node;
      }
      curr = curr->children[c];
    }
    curr->is_leaf = 1;
  }

  bool search(std::string word) {
    auto curr = this;
    for (char c : word) {
      if (this->children.count(c) == 0) {
        return false;
      }
      curr = curr->children[c];
    }
    return curr->is_leaf;
  }

  bool startsWith(std::string prefix) {
    auto curr = this;
    for (char c : prefix) {
      if (this->children.count(c) == 0) {
        return false;
      }
      curr = curr->children[c];
    }
    return true;
  }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */