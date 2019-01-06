/*
Caesar cipher cracker 

 Made By: Deep Patel

*/
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class cipher{
	private: 
		char alphabet[52];
		string word;
		int n[26],b;
	public:
      void shifts(){
      	for(char i=1, k='a'; i<=26,k<='z' ; ++i,++k){
      	 	alphabet[i]=k;
		}
		for(int j=27,m='a' ; j<=52,m<='z' ; ++j,++m){
			alphabet[j]=m;
		}
		
	  	cout<<"Enter Your Word in cipher: "; //entering the cipher word to decode it
	  	cin>>word;
	  	for(int i=0 ; i<=word.length() ; ++i){ //I have great mind hahahaha!, 
	  		for(char k=1,j='a'; k<=26, j<='z'; ++k,++j){
	  			if(word[i]==j){
	  				n[i]=k;
	  				if(k==word.length()){
	  					break;
					  }
				  }
			  }
		  }
		  for(int i=1 ; i<=26 ; ++i){ //bruteforcing 
		  	 cout<<i<<")";
		  	 for(int j=0; j<word.length() ;++j){
		  	 	 cout<<alphabet[n[j]+i];
			   }
			   cout<<endl;
		  }
	  }
	  
};

int main(){
	cipher crack;
	crack.shifts();
	return 0;
}
/*
solving puzzle:

 1. cipher word
 2. loop it 25 time while inner looping one by one of each character
  solving inner looping problem
   g h h s
   + + + +
   1 1 1 1
   . . . . 
   . . . . 
   . . . . 
 25 25 25 25
*/ 






