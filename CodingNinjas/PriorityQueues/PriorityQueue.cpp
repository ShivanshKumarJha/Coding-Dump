#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

// We are creating the min heap
class PriorityQueue {
	vector<int> pq;

public:
	Priority_queue() {

	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	int size() {
		return pq.size();
	}

	int getMin() {
		return (pq.size() == 0) ? -1 : pq[0];
	}

	void insert(int val) {
		pq.push_back(val);
		int childIndex = pq.size() - 1;

		// Up Heapify
		while (childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;
			if (pq[parentIndex] > pq[childIndex]) {
				swap(pq[parentIndex], pq[childIndex]);
			}
			else break;
			childIndex = parentIndex;
		}
	}

	int getMin() {
		if (pq.size() == 0) return 0;

		int ans = pq[0];
		swap(pq[0], pq[pq.size() - 1]);
		pq.pop_back();

		// Down Heapify
		int parentIndex = 0;
		int leftChildIndex = 2 * parentIndex + 1;
		int rightChildIndex = 2 * parentIndex + 2;

		while (leftChildIndex < pq.size()) {
			int minIndex = parentIndex;
			if (pq[leftChildIndex] < pq[minIndex]) minIndex = leftChildIndex;
			if (rightChildIndex < pq.size() && pq[rightChildIndex] < pq[minIndex]) minIndex = rightChildIndex;
			if (minIndex == parentIndex) break;

			swap(pq[minIndex], pq[parentIndex]);

			parentIndex = minIndex;
			leftChildIndex = 2 * parentIndex + 1;
			rightChildIndex = 2 * parentIndex + 2;
		}

		return ans;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	return 0;
}