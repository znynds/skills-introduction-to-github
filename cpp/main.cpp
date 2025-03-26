#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct stu{
	int age;
	char name[10];
	bool sex;
	
}; 

int main(int argc, char** argv) {
	int x = 0x41424344;
	char* p;
	p = (char*)&x;
	printf("%s***\n",p);
	return 0;
}
