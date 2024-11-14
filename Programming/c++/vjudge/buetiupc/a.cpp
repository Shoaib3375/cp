#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF){
		if(a==-1 && b== -1){
			break;
		}

		int op1=0, op2=0;

		if(a>b){
			op1 = a - b;
			op2 = 100- a +b;
		}
		else{
			op1 = b-a;
			op2 = 100-b+a; 
		}

		if(op1<op2){
			cout << op1<<endl;
		}
		else{
			cout <<op2<<endl;
		}
	}

}