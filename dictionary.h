#pragma once
#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>
#include <unordered_map>
using namespace std;

struct Trie {
	bool isEndOfWord;
	unordered_map<char, Trie*> map; //container that contains key-value pairs with unique keys. organized into buckets.
	//which bucket an element is placed into depends entirely on hash of key. k
	string meaning;
};

class dictionary {
private: 
	Trie* getNewTrieNode();

public: 
	void insert(Trie*& root, const string& str, const string& meaning);
	string getMeaning(Trie* root, const string& word);

};

#endif