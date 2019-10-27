/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <strings.h>

#define ID 		0
#define KEYWORD	1

typedef struct id {
	int tokenType;
	char *name;
	int count;
} id;

/* For hash table */
// unsigned hash(char *name);
int getHashValue(char* name, int length);
id *enter(int tokenType, char *name, int length);
int isKeyword(char *name, int hashval);
int getCount(int hashval);


#endif
