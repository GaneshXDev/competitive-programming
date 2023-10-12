#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#include<string.h>

/* TYPES */
#define ll long long

/* Handling I/O from input and output file */
void handleIO() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

/* Handler :: to speed up the execution */
void handleFastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/* Handling the main login here */
void handleLogic() {
}



int main() {
	//Starters :: begin
	handleIO();
	handleFastIO();
	//Starters :: ends

	//Inputs :: begins
	ll int test_cases = 1;
	cin >> test_cases;
	while(test_cases--) handleLogic(); // Main logic func is called here
	//Inputs :: ends

	return 0;
}