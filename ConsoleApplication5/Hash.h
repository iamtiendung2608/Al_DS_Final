#pragma once
#ifndef Hash_H
#define Hash_H
//Use Template later
class HashTable {
	int* key;
	int* value;
	//Seperate chaining
	//Linear Probing
public:
	HashTable(int nKey) {
		key = new int[nKey];
		value = new int[nKey];
		for (int i = 0;i < nKey;i++)
			key[i] = 0;
		for (int i = 0;i < nKey;i++)
			value[i] = 0;
	}
	//Use for < 100 key value pair
	int hashcode(int n) {	
		//prime number
		return n % 97;
	}
	void insert(int newkey, int value) {
		key[hashcode(newkey)] = value;
	}
	int Select(int SelectKey) {
		return value[SelectKey];
	}
	bool contains(int keysearch) {
		return value[keysearch] != 0;
	}
};
#endif // !Hash_H
