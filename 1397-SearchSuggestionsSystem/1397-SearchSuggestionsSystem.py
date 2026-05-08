# Last updated: 08/05/2026, 09:28:20
class TrieNode():
    def __init__(self):
        self.children={}
        self.suggestions=[]


class Trie:

    def __init__(self):
        self.root=TrieNode()

    def insert(self, word: str) -> None:
        curr= self.root

        for c in word:
            if c not in curr.children:
                curr.children[c]=TrieNode()

            curr= curr.children[c]
            if len(curr.suggestions)<3:
                curr.suggestions.append(word)


    def search(self, word: str) -> bool:

        curr= self.root

        res=[]
        for c in word:
            if c not in curr.children:
                break
            curr= curr.children[c]
            res.append(curr.suggestions)

        totalLeft= len(word)- len(res)
        if totalLeft:
            res.extend([[] for _ in range(totalLeft)])

        return res


class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        
        products.sort()
        trie= Trie()

        for word in products:
            trie.insert(word)

        return trie.search(searchWord)           
            