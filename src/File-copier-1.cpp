#include<iostream>
#include<vector>
#include<Windows.h>
#include<cstring>
using namespace std;
int main(){
	string s;
	freopen("output.txt","r",stdin);
	cin>>s;
	fclose(stdin);
	freopen("output.txt","a",stdout);
	cout<<s;
	fclose(stdout);
	return 0;
}
