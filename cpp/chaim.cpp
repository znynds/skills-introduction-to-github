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
	//�жϿ����� 
	bool empty(){
		return head -> next == head;
	}
	//��ʾ 
	void disp(Node *head){			
		Node *p = head ->next;
		while(p){		cout<< p ->dat <<endl;	p = p -> next;}//��� 
	}


	//ͷ���뷨 
	void addHead(Node *head,char *dat){
		for(char*p = dat; *p; p++){				//Node *n = new Node(*p);//�Ӵ��������п��滻�����24�� 
			Node *n = new Node(*p, head ->next);//n->next = lst->next;		
			head ->next = n;			
		}	
	} 

//β���뷨 
void addRear (Node *head,char *dat){//������� 
	Node *tail = head;
	for(char *pp = dat;*pp; pp++){
		Node *n = new Node(*pp);	//�������� 
		tail->next = n;
		tail =n;
	} 
}
};



int main(int argc, char** argv) {
	
	Node *lst = new Node();		//lst��ͷָ��. 
	char m[]= "abcde";
	
	addHead(lst,m);
	 
	disp(lst);
	
	return 0;
}




void chain(){		//�ֶ��������� 
	//	Node *d = new Node('d');	//d��ӿ�ָ�룬��0. 
//	Node *c = new Node('c',d);
//	Node *b = new Node('b',c);	
//	Node *a = new Node('a',b);
//	
//	Node *x = new Node('x');
//	b->next = x;
//	x->next = c;
//	new Node()����ͷ�ڵ㣬headָ��ͷ�ڵ㣬��ͷָ��. 
//	
//	Node * head = new Node();	//ͷ�ڵ㣬���������.
//	head ->next = a; 			//a�ڴ˴�Ϊ��Ԫ�ڵ㣬����һ��������ݵĽڵ�.
//
//	Node *p = a;				//���. 
//	while (p){
//		cout<<p->dat<<endl;
//		p = p->	next; 
//		
//	}

}

