# Last updated: 08/05/2026, 09:28:06
class Page:
    def __init__(self, url, next= None, prev= None):
        self.url= url
        self.next= next
        self.prev= prev

class BrowserHistory:

    def __init__(self, homepage: str):
        self.page= Page(homepage)
        

    def visit(self, url: str) -> None:
        new_page= Page(url)
        self.page.next=new_page
        new_page.prev= self.page

        self.page= new_page
        

    def back(self, steps: int) -> str:
        while self.page.prev and steps:
            self.page= self.page.prev
            steps-=1
        return self.page.url
    
    def forward(self, steps: int) -> str:
        while self.page.next and steps:
            self.page= self.page.next
            steps-=1
        return self.page.url




# Your BrowserHistory object will be instantiated and called as such:
# obj = BrowserHistory(homepage)
# obj.visit(url)
# param_2 = obj.back(steps)
# param_3 = obj.forward(steps)