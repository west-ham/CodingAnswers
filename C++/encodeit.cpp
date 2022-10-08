//Solution of Codechef Challenge - ENCODEIT

#include <bits/stdc++.h>
#include<sstream>
using namespace std;

typedef long long ll;

int BinToDec(ll n)
{
    ll decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main() {
	// your code goes here
	int a;
	cin >> a;
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f' , 'g', 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' };
	while(a--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    string ans;
		string temp;
		 for (int i = 0 ; i < n ; i++){
			temp += s[i];
			if(temp.size() == 4){
				int y;
				istringstream(temp) >> y;
				ans += arr[BinToDec(y)];
				temp.erase();
			}
		}
	    /*for (int i = 0 ; i < n ; i+=4){
	        //ans += arr[BinToDec(stoi(s.substr(i,i+4)))];
            string temp = s.substr(i,i+4);
	        //ll x = stol(temp);
			ll x;
			istringstream(temp) >> x;
	        ll y = BinToDec(x);
	        ans += arr[y];
	    }*/
	    cout << ans << endl;
	}
	return 0;
}
