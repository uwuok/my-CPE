#include <bits/stdc++.h>
using namespace std;

string table[101];

int main(void)
{	
	int row = 0, col = 0;
	// char table[][col] = {"", ""};
	while (getline(cin, table[col])) {
		row = max(row, (int)table[col].size());
		++col;
	}
	
	for (int i = 0; i < row; ++i) {
		for (int j = col - 1; j >= 0; --j) {
			if (i < table[j].size()) cout << table[j][i];
			else if (j != 0) cout << " "; // 最後一行不輸出空白 
		}
		cout << endl;
	}
	return 0;
}

/*
Rene Decartes once said,  
"I think, therefore I am." 
*/

/*
 dlk dls sld glds glsd 
     dsl glsd glsd glsd lg sdl 
     sdjlg sdl gsld 
*/