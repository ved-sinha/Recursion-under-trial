#include<bits/stdc++.h>
using namespace std;

bool checkif(string &in,int i,int j){
    for(int k=i;k<j;k++){
        if(in[k] == in[j])
        return 0;
    }
    return 1;
}

void distinctPermutations(string &in,int i){
    //Base case
    if(in[i]==NULL){
        cout<<in<<endl;
        return;
    }
    //Recursive case
    bool flag=0;
    for(int j=i;in[j]!=NULL;j++){
        
        bool check = checkif(in,i,j);
        
        if(check) {
        swap(in[j],in[i]);
        distinctPermutations(in,i+1);
        swap(in[j],in[i]);
        }
        
    }
}

int main() {
	// your code goes here
	string in;
	cin>>in;
	sort(in.begin(),in.end());
	distinctPermutations(in,0);
	return 0;
}
