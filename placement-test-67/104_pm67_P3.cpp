//This code has just 80 points. I think it allows anyone to bid on one item at the same price.
#include <bits/stdc++.h>
using namespace std;

map<string, vector<pair<string, int>>> bidding;
map<string, pair<string, int>> maxprize;
set<string> all_bidder;

void recalculateMaxPrize(const string &product) {
    int max_bid = 0;
    string max_bidder = "";
    for (auto &v : bidding[product]) {
        if (v.second > max_bid) {
            max_bid = v.second;
            max_bidder = v.first;
        }
    }
    if (max_bid > 0) {
        maxprize[product] = {max_bidder, max_bid};
    } else {
        maxprize[product] = {"", 0};
    }
}

int main() {
    int n;
    cin >> n;
    string bidder, product;
    int prize;

    for (int i = 0; i < n; i++) {
        char choose;
        cin >> choose;

        if (choose == 'B') {
            cin >> bidder >> product >> prize;
            bidding[product].push_back({bidder, prize});
        } else if (choose == 'W') {
            cin >> bidder >> product;
            auto &bids = bidding[product];
            for (auto &v : bids) {
                if (v.first == bidder) {
                    v.second = 0;
                }
            }
            recalculateMaxPrize(product);
        }
    }

    for (auto &bids : bidding) {
        for (auto &v : bids.second) {
            all_bidder.insert(v.first);
            if (v.second > 0 && maxprize[bids.first].second < v.second) {
                maxprize[bids.first] = {v.first, v.second};
            }
        }
    }

    for (auto &bidder : all_bidder) {
        int totalPrize = 0;
        vector<string> products;
        for (auto &product : maxprize) {
            if (product.second.first == bidder) {
                totalPrize += product.second.second;
                products.push_back(product.first);
            }
        }
        cout << bidder << ": $" << totalPrize;
        if (totalPrize > 0) {
            cout << " -> ";
            for (const string &p : products) {
                cout << p << " ";
            }
        }
        cout << endl;
    }
}
