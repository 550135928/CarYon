#include"crayon.h"
using namespace std;
using namespace ca;
int main(){
	dataname="��ѧ�� test";	//���������ǰ׺ 
	makein(20){
		csh;	//��ʼ������ 
		int a=cyrand(10,300);
		inint(a);
		instring("\n");
		for(int i=0;i<a;i++){
			inint(cyrand(0,100));
			instring(" ");
			inint(cyrand(0,100));
			instring(" ");
			inint(cyrand(0,100));
			instring("\n");
		}
	}
	makeout(20);
}
