#include <iostream>
using namespace std;

#define ROW 4
#define COL 4

void display( int arg[][COL]) {
	
	for( int i=0; i<ROW; i++)
		for(int j=0; j<COL; j++)
			cout<<"arg["<< i<<"]["<< j<<"] = " << arg[i][j] <<endl;		
}

void main(){
	int arr[ROW][COL], i, j;

	for( i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
			arr[i][j] = i * COL + j;
	display( arr);
	/*
	for( i=0; i<4; i++)
		for(j=0; j<3; j++){
			cout<<"arr["<< i<<"]["<< j<<"] = " << arr[i][j] <<endl;
			cout<<"arr["<< i<<"]["<< j<<"] = " << i[arr][j] <<endl;
		//	cout<<"arr["<< i<<"]["<< j<<"] = " << i[j][arr] <<endl;
		}
		*/
}


#if 0
#define AGP

// ----------- Application ------------
void main(){
	cout<<"Common code 1111"<<endl;

#ifdef AGP
	cout <<" AGP AAAAA"<<endl;
#undef AGP

#endif
	cout<<"Common code 2222"<<endl;

#ifdef VGA
	cout <<" VGA "<<endl;
#endif
	cout<<"Common code 3333"<<endl;

#ifdef SVGA
	cout <<" S-VGA "<<endl;
#endif

#ifdef AGP
	cout <<" AGP BBBBB"<<endl;
#endif
	cout<<"Common code 44444"<<endl;
}

#endif