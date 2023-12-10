#include<bits/stdc++.h> 
using namespace std;
int main(){
	int t, r1, r2,B, ballPlayed;
	double current_rr, asking_rr;
	cin >> t;
	while(t--){
		cin >> r1>> r2 >> B;
		ballPlayed = 300 - B;
		current_rr = (r2/ballPlayed)*6;
		asking_rr = ((r1-r2 + 1) / B) * 6;
		printf("%0.2lf %0.2lf", current_rr, asking_rr);
		return 0
	}
}
