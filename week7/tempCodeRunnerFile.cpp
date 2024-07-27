string str = "abc";
	string output = "";
	int index = 0;
	vector<string> ans;
	findSubsequences(str, output, index, ans);


	cout << "printing the subsequences in vector: " << endl;
	for(string s: ans) {
		cout << "-> " << s << endl;
	}