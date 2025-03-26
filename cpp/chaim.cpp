#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node{
	char dat;
	Node *next;
	Node(char data= ' ',Node *node= 0){
		dat = data;	next = node;
	}
};

class linkedList{
private:
	int size;
	Node *head;
	
public:
	linkedList(){
		head = new Node;
		head->next = head;
		size = 0;
	}
	//判断空链表 
	bool empty(){
		return head -> next == head;
	}
	//显示 
	void disp(Node *head){			
		Node *p = head ->next;
		while(p){		cout<< p ->dat <<endl;	p = p -> next;}//输出 
	}


	//头插入法 
	void addHead(Node *head,char *dat){
		for(char*p = dat; *p; p++){				//Node *n = new Node(*p);//从此行起两行可替换代码第24行 
			Node *n = new Node(*p, head ->next);//n->next = lst->next;		
			head ->next = n;			
		}	
	} 

//尾插入法 
void addRear (Node *head,char *dat){//正序插入 
	Node *tail = head;
	for(char *pp = dat;*pp; pp++){
		Node *n = new Node(*pp);	//输入数据 
		tail->next = n;
		tail =n;
	} 
}
};



int main(int argc, char** argv) {
	
	Node *lst = new Node();		//lst是头指针. 
	char m[]= "abcde";
	
	addHead(lst,m);
	 
	disp(lst);
	
	return 0;
}




void chain(){		//手动建立链表 
	//	Node *d = new Node('d');	//d后接空指针，即0. 
//	Node *c = new Node('c',d);
//	Node *b = new Node('b',c);	
//	Node *a = new Node('a',b);
//	
//	Node *x = new Node('x');
//	b->next = x;
//	x->next = c;
//	new Node()生成头节点，head指向头节点，是头指针. 
//	
//	Node * head = new Node();	//头节点，不存放数据.
//	head ->next = a; 			//a在此处为首元节点，即第一个存放数据的节点.
//
//	Node *p = a;				//输出. 
//	while (p){
//		cout<<p->dat<<endl;
//		p = p->	next; 
//		
//	}

}

