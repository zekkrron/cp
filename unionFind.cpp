class UnionFind{
public: 
	vector<int> p, siz;
	UnionFind(int n){
		siz.assign(n, 1); p.assign(n, 0);
		iota(p.begin(), p.end(), 0);
	}
	int findSet(int i){ return (p[i] == i) ? i : p[i] = findSet(p[i]); }
	bool isSameSet(int i, int j){ return findSet(i) == findSet(j); }
	void unionSet(int i, int j){
		int x = findSet(i), y = findSet(j);
		if(siz[x] < siz[y]) swap(x, y);
		if(x != y){
			p[y] = x;
			siz[x] += siz[y];
			siz[y] = 0;
		}
	}
};
