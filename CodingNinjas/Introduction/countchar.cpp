#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  	char c;
    c=cin.get();
    int countChar=0,countDig=0,countSpa=0;
    while(c!='$'){
        if(c>='a' and c<='z')
            countChar++;
        else if(c>='0' and c<='9')
            countDig++;
        else
            countSpa++;
        c=cin.get();
    }
    cout<<countChar<<" "<<countDig<<" "<<countSpa<<endl;
}


