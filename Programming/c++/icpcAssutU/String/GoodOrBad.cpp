#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const int mx = 10e5 + 123;
char s[mx];
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>> s;
		int len = 0;
		while (s[len]!=0)
		{
			len++;
		}
		
		bool isGood = false;
		for (int i = 2; i < len; ++i)
		{
			char s1 = s[i-2];
			char s2 = s[i-1];
			char s3 = s[i];
			if (s1=='0'&&s2=='1'&&s3=='0')
			{
				isGood = true;
				break;
			}else if (s1=='1'&&s2=='0'&&s3=='1')
			{
				isGood = true;
				break;
			}	
		}
		(isGood) ? cout << "Good\n" : cout<<"Bad\n";
	}
}


/* 
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[1001];
        scanf("%s", s);
        
        int isGood = 0;
        for (int i = 2; i < strlen(s); ++i) {
            if ((s[i - 2] == '0' && s[i - 1] == '1' && s[i] == '0') ||
                (s[i - 2] == '1' && s[i - 1] == '0' && s[i] == '1')) {
                isGood = 1;
                break;
            }
        }
        (isGood) ? printf("Good\n") : printf("Bad\n");
    }
    return 0;
}

 */