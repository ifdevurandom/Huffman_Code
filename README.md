# compressor
Compressor wrote in C that implement the Huffman code
## How does it work?
It generate a recursive tree in which the most used letters are higher on the tree, so instead of 8 bit to encode one, i have to encode only the route to arrive to the letter on the tree (8 bit vs maybe 3 for the more used ones)
You can find a better explanation of the code on [mr Tom Scott's channel](https://www.youtube.com/watch?v=JsTptu56GM8)
### At the moment the code is not working, hope to fix it soon :D
