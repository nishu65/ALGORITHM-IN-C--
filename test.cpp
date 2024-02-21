#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int A[10];
	    for(int i = 0; i < 10; i++)
	    {
	        cin >> A[i];
	    }
	    int team1=0;
	    int team2=0;
	    for(int j=0;j<10;j++){
	        if(j%2==0){
                cout<<j<<endl;
	            team2=team2+A[j];
	            
	        }
	        else{
                cout<<j<<endl;
	            team1=team1+A[j];
	            cout<<team1<<"     ";
	        }
	    }
	    if(team1==team2){
	        cout<<0<<endl;
	    }
	    else if(team1>team2){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
    }
}
