#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXSIZE 100

enum status { ok,error,overf};	//枚举 

struct Book{
	char id [64];//isbn code
	char name [64];
	double price; 	
}; 								

class SqList{
	private:					//私有 
	 	Book *em;
	 	int len;
	public:						//共有 
		SqList(){
			em = new book[MAXSIZE];
			if (!em) 	exit(overf);//判断是否空指针。若是则返回overflow 
			len = 0;			
			
			int cnt = sizeof(bk)/sizeof(Book);
			for(int i=0;i<cnt;i++){
				strcpy(em[i].id,bk[i].id);
				strcpy(em[i].name,bk[i].name);
				em[i].price = bk[i].price;	//对各对象赋值 
				
				len++;
			}
		}
		
		int Size(){return len;	};
		
		Status GetELe(int i, Book &e){	//引用book类型保存数据 
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
    		for(int j=len-1; j>=i-1; j--)	em[j+1] = em[j];//每个往后移一位 
    		em[i-1] = e;				//在i处插入一项 
    		len++;
    		return OK;
		}
		Status Delete(int i) {
    		if((i<1) || (i>len))		return ERROR;
    		for(int j=i; j<=len; j++)	em[j-1] = em[j];//每个往前移一位 
    		--len;						//在i处删去一项
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
