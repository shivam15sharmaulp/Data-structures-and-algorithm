# Last updated: 08/05/2026, 09:30:55
class TrieNode():
    def __init__(self):
        self.children={}
        self.endofword= False


class Trie:

    def __init__(self):
        self.root=TrieNode()

    def insert(self, word: str) -> None:
        curr= self.root

        for c in word:
            if c not in curr.children:
                curr.children[c]=TrieNode()

            curr= curr.children[c]

        curr.endofword= True


    def search(self, word: str) -> bool:

        curr= self.root

        for c in word:
            if c not in curr.children:
                return False
            else:
                curr= curr.children[c]

        if(curr.endofword==True):
            return True        

    def startsWith(self, prefix: str) -> bool:

        curr= self.root

        for c in prefix:
            if c in curr.children:
                curr= curr.children[c]

            else:
                return False


        return True

        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)