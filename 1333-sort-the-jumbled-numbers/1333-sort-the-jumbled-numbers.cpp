class Solution {
public:
    static int trans(int num, vector<int>& v) {
        string s = to_string(num);
        string ans = "";
        for (char a : s) {
            ans += to_string(v[a - '0']);
        }
        return stoi(ans);
    }

    vector<int> sortJumbled(vector<int>& m, vector<int>& n) {
        vector<int> v(10, 0);
        map<int, int> ma;

        // Initialize the mapping vector v from the given m vector
        for (int i = 0; i < 10; ++i) {
            v[i] = m[i];
        }

        // Compute the transformed values
        for (int a : n) {
            if (ma.find(a) == ma.end()) {
                ma[a] = trans(a, v);
            }
        }

        // Sort the array n based on the transformed values
        sort(n.begin(), n.end(), [&](int a, int b) {
            return ma[a] < ma[b];
        });

        // Print the mapping for debugging purposes
        for (auto i = ma.begin(); i != ma.end(); ++i) {
            cout << i->first << " " << i->second << endl;
        }

        return n;
    }
};