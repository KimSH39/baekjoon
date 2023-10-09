#include <iostream>
#include <map>

using namespace std;

int main()
{	
	int n, x;
    long long ans = 0;
    
	map <int, int> tree;
	map <int, int> ::iterator up, low;
    
    tree.insert({0, -1});
    tree.insert({300001, -1});
    
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        
        up = tree.upper_bound(x);
        low = up;
        --low;
        
        int val = max(up->second, low->second) + 1; 
        tree.insert({ x, val });
        
        ans += val;
        printf("%lld\n", ans);
    }
    
    return 0;
}