#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node{
	int data;
	Node *next;
	Node(int dat= 0,Node *nxt= 0){
		data = dat;	next = nxt;
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
	void print(){
		Node *p = head;
		while(p ->next !=head){
			p = p->next;
			printf("%5d",p -> data);
		}
		printf("\n");
	}


	//ͷ���뷨 
	void addHead(int data){			
		Node *n = new Node(data, head ->next);
		head ->next = n;				
	} 

	//β���뷨 (˳�����)
	void addRear (int data){	
		Node *n = new Node(data);
		Node *p = head;
		while(p -> next != head)	p = p->next;
		n ->next = head;
		p -> next =n;
	}
	
	
	
	//ɾ���ڵ�
	void del(int data){
		Node *p = head;
		while(p->next != head){
			if(p -> next->data == data){
				Node*t = p->next;
				p->next = t->next;
				
				delete t;
				return;
			}
			p = p->next;
		}
	}
	
	//��������ĺϲ�
	void merge(linkedList *rr) {		//�˴�rrΪ�ڶ���ѭ������ 
		Node *ln = head->next;
		Node *rn = rr->head->next;
		
		while(ln->next != head)		ln = ln->next;
		while(rn->next != rr->head)	rn = rn->next;
		
		ln->next = rr->head->next;
		rn->next = head;
		
		delete rr->head;
		 
	}
	
	
};

int main(int argc, char** argv) {
	
	linkedList emp1;
	for(int i=0;i<5;i++)	emp1.addRear(i+1);
	emp1.print();
	
	linkedList emp2;
	for(int i=0;i<5;i++)	emp2.addRear(i+15);
	emp2.print();
	
	emp1.merge(&emp2);
	emp1.print();

	
	return 0;
}

