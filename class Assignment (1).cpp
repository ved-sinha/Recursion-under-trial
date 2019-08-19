#include <iostream>
using namespace std;

char out[1000];
int count=0;

void classAssignment(int n,int j){
    //Base case
    if(j==n){
        count++;
        //cout<<out<<endl;
        return;
    }
    
    //Recursive case
    out[j]='0';
    classAssignment(n,j+1);
    if(out[j-1]!='1'){
        out[j]='1';
    classAssignment(n,j+1);
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    count=0;
	    int n;
	    cin>>n;
	    classAssignment(n,0);
	    cout<<count<<endl;
	}
	return 0;
}
