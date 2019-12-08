#include <iostream>
#include "dictionary.h"
using namespace std;


Trie* dictionary::getNewTrieNode() {
	Trie* node = new Trie;
	node->isEndOfWord = false;
	return node;
}


void dictionary::insert(Trie*& root, const string& str, const string& meaning) {
	if (root == NULL) {
		root = getNewTrieNode();
	}

	Trie* temp = root;
	for (int i = 0; i < str.length(); i++) {
		char x = str[i];

		if (temp->map.find(x) == temp->map.end()) {
			temp->map[x] = getNewTrieNode();
		}
		temp = temp->map[x];
	}

	temp->isEndOfWord = true;
	temp->meaning = meaning;
}

string dictionary::getMeaning(Trie* root, const string& word) {
	if (root == NULL)
		return "";
	Trie* temp = root;
	for (int i = 0; i < word.length(); i++) {
		temp = temp->map[word[i]];
		if (temp == NULL)
			return "";
	}
	if (temp->isEndOfWord) {
		return temp->meaning;
	}
	return "";
}