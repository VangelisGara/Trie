# Trie
The trie implemented is used as an inverted index for a [search engine](https://github.com/VangelisGara/minisearch-engine) that is used to query big text documents. The engine will get documents like this:

    0 The quick brown fox leaped over the lazy lazy dog
    1 Quick brown foxes leaped over lazy dogs for fun

and create the following trie:

![Trie](https://github.com/VangelisGara/Trie/blob/master/trie%20image/Screenshot_20190805_004837.png)
Each word stored in the trie has appended in the end a post list, a list, with nodes that contain the id the word exists and the word frequency on this document.
