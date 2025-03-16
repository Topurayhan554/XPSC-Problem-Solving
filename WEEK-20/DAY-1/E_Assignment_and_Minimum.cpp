#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9 + 7;

int tree[4 * N], lazy[4 * N];

void push(int node, int start, int end) {
    if (lazy[node] != -1) {  // যদি কোনো আপডেট বাকি থাকে
        tree[node] = lazy[node];  // নতুন মান সেট করি
        if (start != end) {  // যদি লিফ না হয়, তাহলে নিচের অংশেও সেট করি
            lazy[node * 2] = lazy[node];
            lazy[node * 2 + 1] = lazy[node];
        }
        lazy[node] = -1;  // লেজি ক্লিয়ার করি
    }
}

void update(int node, int start, int end, int l, int r, int value) {
    push(node, start, end);
    if (start > r || end < l) return;  // একদম বাইরে থাকলে কিছুই করব না
    if (start >= l && end <= r) {  // পুরোপুরি রেঞ্জের মধ্যে পড়লে
        lazy[node] = value;  // আপডেট রাখি
        push(node, start, end);
        return;
    }

    int mid = (start + end) / 2;
    update(node * 2, start, mid, l, r, value);
    update(node * 2 + 1, mid + 1, end, l, r, value);
    tree[node] = min(tree[node * 2], tree[node * 2 + 1]);  // মিন আপডেট করি
}

int query(int node, int start, int end, int l, int r) {
    push(node, start, end);
    if (start > r || end < l) return INF;  // রেঞ্জের বাইরে থাকলে কিছু না
    if (start >= l && end <= r) return tree[node];  // পুরোপুরি রেঞ্জের মধ্যে থাকলে রিটার্ন করি

    int mid = (start + end) / 2;
    int left_min = query(node * 2, start, mid, l, r);
    int right_min = query(node * 2 + 1, mid + 1, end, l, r);
    return min(left_min, right_min);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    fill(tree, tree + 4 * N, 0);  // শুরুতে সব 0
    fill(lazy, lazy + 4 * N, -1); // শুরুতে কোনো লেজি মান নেই

    while (m--) {
        int type, l, r, v;
        cin >> type >> l >> r;
        if (type == 1) {  // আপডেট অপারেশন
            cin >> v;
            update(1, 0, n - 1, l, r - 1, v);
        } else {  // কুয়েরি অপারেশন
            cout << query(1, 0, n - 1, l, r - 1) << '\n';
        }
    }

    return 0;
}
