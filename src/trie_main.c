#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/trie.h"
#include "../include/postlist.h"

extern int trieSize; // global variable that stores trie size

int main(){
  char buffer[500];

  trieNode* root = NULL; // trie resides here
  trie_insert(&root,"award",1);
  trie_insert(&root,"award",1);
  trie_insert(&root,"acapella",2);
  trie_insert(&root,"acapella",5);
  trie_insert(&root,"arizona",3);
  trie_insert(&root,"awe",4);
  // print trie words and the # of documents each word exists in
  printTrie(root,buffer,0);
  trie_destroy(root);
}
