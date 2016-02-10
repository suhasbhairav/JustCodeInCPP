#include<iostream>
using namespace std;

int main(){
    int i=0;

    while(i< 10){
      cout << i << " -- "<< i*i << endl;
      i++;
    }
    i = 0;
   for(int i=0;i<10; i ++){
    cout << i << " -- " << i * (i-1) << endl;
   }
 	i = 0;
	do{
		cout<< i << i*i*i << endl;
		i++;
	}while(i<10);

}
