#include<bits/stdc++.h>
using namespace std;

void printKeypadHelper(int num, string output) {
  if (num == 0) {
    cout << output << endl;
    return;
  }

  int n = num % 10;
  string temp;

  switch (n) {
  case 2:temp = "abc";
    break;
  case 3:temp = "def";
    break;
  case 4:temp = "ghi";
    break;
  case 5:temp = "jkl";
    break;
  case 6:temp = "mno";
    break;
  case 7: temp = "pqrs";
    break;
  case 8:temp = "tuv";
    break;
  case 9:temp = "wxyz";
    break;
  }
  for(int i=0;i<temp.size();i++){
  	printKeypadHelper(num/10,temp[i]+output);
  }
}

void printKeypad(int num){
	string x="";
	printKeypadHelper(num,x);
}


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;cin>>n;
	printKeypad(n);
	return 0;
}