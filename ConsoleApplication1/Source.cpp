#include "Punct_stream.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	Punct_stream ps{ cin };
	ps.whitespace(";:,.?!(){}[]<>");
	ps.case_sensitive(false);

	cout << "Enter words:\n";
	vector<string> vs;
	for (string word; ps >> word;) vs.push_back(word);
	sort(vs.begin(), vs.end());

	for (int i = 0; i < vs.size(); ++i)
	{
		if (i == 0 || vs[i] != vs[i - 1]) cout << vs[i] << '\n';
	}
	return 0;
}