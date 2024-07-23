class Solution {
public:
   int maxProduct(vector<string>& words) {
	vector<int> v;

	for (auto i: words) {
		int value = 0;
		for (int j=0;j<i.length();j++) {
			int temp = 1 << (int(i[j])-97);
			value = value | temp;
		}
		v.push_back(value);
	}

	int ans = 0;
	for (int i=0;i<v.size()-1;i++) {
		for (int j=i+1;j<v.size();j++) {
			if ((v[i] & v[j]) == 0)
				if (ans < words[i].length()*words[j].length())
					ans = words[i].length()*words[j].length();
		}
	}

	return ans;
}
};