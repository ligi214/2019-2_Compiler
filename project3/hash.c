/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <string.h>

#define  HASH_TABLE_SIZE   101

typedef struct nlist {
	struct nlist *next;
	id *data;
} nlist;

static nlist *hashTable[HASH_TABLE_SIZE];

int getHashValue(char* name, int length){
	// return index of the lex in the hashtable
	int hashval = 0;
	for(int i=0;i<length;i++){
		hashval = hashval * HASH_TABLE_SIZE + name[i];
		hashval = hashval%HASH_TABLE_SIZE;
	}
	while(hashTable[hashval]!=NULL && strcmp(hashTable[hashval]->data->name, name)!=0) hashval=(hashval+1)%HASH_TABLE_SIZE;
	return hashval;
}

id *enter(int tokenType, char *name, int length) {
	// if there is no data with the given name in the hash table, add the node
	// if there is, simply return the data
	int hashval = getHashValue(name, length);
	if(hashTable[hashval]==NULL){
		hashTable[hashval] = malloc(sizeof(struct nlist));
		hashTable[hashval]->next = hashTable[hashval+1];
		hashTable[hashval]->data = malloc(sizeof(struct id));
		hashTable[hashval]->data->name = malloc(length);
		strcpy(hashTable[hashval]->data->name, name);
		hashTable[hashval]->data->tokenType = tokenType;
	}
	return hashTable[hashval]->data;
}

int isKeyword(char *name, int hashval){
	// return if the given name is keyword or not
	// 1 if keyword, 0 if not
	if(strcmp(name, hashTable[hashval]->data->name)==0 && hashTable[hashval]->data->tokenType == KEYWORD) return 1;
	return 0;
}

