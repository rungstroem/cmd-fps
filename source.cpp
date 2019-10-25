#include <string>
#include <iostream>

using namespace std;

string map;

void print_map(){
	int p=0;
	int y_axis=10, x_axis=12;

	for(int y=0; y<y_axis; y++){
		for(int x=0+p; x<x_axis+p; x++){
			printf("%c", map[x]);
		}
		p += 12;
		printf("\n");
	}
}

void insert_map(int x, int y, char val){
	map[y*12+x] = val;
}

int main(){

	map = "############";
	map +="#          #";
	map +="#          #";
	map +="#          #";
	map +="#    #     #";
	map +="#          #";
	map +="#          #";
	map +="#          #";
	map +="#          #";
	map +="############";
	
	print_map();
	insert_map(5,2,'*');
	print_map();

}
