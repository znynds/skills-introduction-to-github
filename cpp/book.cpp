#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXSIZE 100

enum status { ok,error,overf};	//ö�� 

struct Book{
	char id [64];//isbn code
	char name [64];
	double price; 	
}; 								

class SqList{
	private:					//˽�� 
	 	Book *em;
	 	int len;
	public:						//���� 
		SqList(){
			em = new book[MAXSIZE];
			if (!em) 	exit(overf);//�ж��Ƿ��ָ�롣�����򷵻�overflow 
			len = 0;			
			
			int cnt = sizeof(bk)/sizeof(Book);
			for(int i=0;i<cnt;i++){
				strcpy(em[i].id,bk[i].id);
				strcpy(em[i].name,bk[i].name);
				em[i].price = bk[i].price;	//�Ը�����ֵ 
				
				len++;
			}
		}
		
		int Size(){return len;	};
		
		Status GetELe(int i, Book &e){	//����book���ͱ������� 
			if( i<1 || i>len)	return error;
			e = em [i-1];
			return ok;			
		}
		
		Book LocateEle(double pri){
			for(int i = 0;i<=len;i++){
				if(em[i].price == pri)	return em[i];
			}
			return Book();			 
		}
		
		Status Insert(int i,const Book &e){
			if((i<1) || (i>len+1))		return ERROR;
    		if(len == MAXSIZE)				return ERROR;
    		for(int j=len-1; j>=i-1; j--)	em[j+1] = em[j];//ÿ��������һλ 
    		em[i-1] = e;				//��i������һ�� 
    		len++;
    		return OK;
		}
		Status Delete(int i) {
    		if((i<1) || (i>len))		return ERROR;
    		for(int j=i; j<=len; j++)	em[j-1] = em[j];//ÿ����ǰ��һλ 
    		--len;						//��i��ɾȥһ��
   			return OK;
  		}

  		void Disp() {
    		for(int i=0; i<len; i++)   {
      			cout << left << setw(15) << em[i].id << "\t" << left
      			<< setw(50) << em[i].name << "\t" << left
      			<< setw(5) << em[i].price << endl;
    		}
  		}
};



int main(int argc, char** argv) {
	
	
	
	
	
	
	
	return 0;
}
