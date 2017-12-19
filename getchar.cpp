#include <iostream>
#include <vector>
#include <string>
#include<stdio.h>
int main(){
	time_t start=clock();
// std::vector<std::string> vector;
// std::string temp;
char c;
while((c=getchar())!=EOF){
	// if (c==' '){
	// 	if(temp.size()!=0){
	// 		vector.push_back(temp);
	// 	}
	// }
	// else{
	// 	temp.push_back(c);
	// }

}
time_t end=clock();
double time =(double)(end-start);
std::cout<<"getchar time:"<<time<<std::endl;

return 0;
}