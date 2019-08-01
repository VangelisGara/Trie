#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/trie.h"
#include "../include/postlist.h"

/* NOTES */
/* ========================================================================== */
/*    1.gdb --args ./minisearch -i ./inputs/doc1.txt     	                  */
/*    2.valgrind --leak-check=full -v ./minisearch -i ./inputs/bigDataset.txt */
/* ========================================================================== */

extern int trieSize; // global variable that stores trie size

int main(){
  char buffer[500];

  trieNode* root = NULL; // trie resides here
  trie_insert(&root,"award",1);
  trie_insert(&root,"acapella",2);
  trie_insert(&root,"acapella",5);
  trie_insert(&root,"arizona",3);
  trie_insert(&root,"awe",4);

  printTrie(root,buffer,0);
  trie_destroy(root);
}
