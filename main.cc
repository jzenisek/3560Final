#include<iostream>
#include<fstream>

using namespace std;

void countLine(char* pName);
void countChar(char* pName);

int main(){
	char* pName;

	cout<<"Please enter the file you would like to have counted or type No.\n";
	cin>>pName;

//	if(pName == 'No' || pName == 'no'){
//		countLine('Ohio University');
//		countChar('Athens');
//	}else{
		countLine(pName);
		countChar(pName);
//	}		

	return 0;
}

void countLine(char* pName){

	int num; //number of lines
	string line;

	ifstream myfile(pName);

	if(myfile.is_open()){

		while(!myfile.eof()){
			getline(myfile, line);
			num++;
		}
	}
	cout<<num<<" Lines\n";
}

void countChar(char* pName){
	int num; //number of characters
	char c;

	ifstream myfile(pName);
	
	if(myfile.is_open()){
		while(!myfile.eof()){
//			if(fin.peek() == -1)
//				break;

			c = fin.get();

			if(c != '\n')
				num++;
		}
	}
	cout<<num<<" Characters\n";
}
