//502. IPO

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits,
                             vector<int>& capital) {
        int n = profits.size();
        std::vector<std::pair<int, int>> projects;

        for (int i = 0; i < n; ++i) {
            projects.emplace_back(capital[i], profits[i]);
        }

        std::sort(projects.begin(), projects.end());

        std::priority_queue<int> maxHeap;
        int i = 0;

        for (int j = 0; j < k; ++j) {
            while (i < n && projects[i].first <= w) {
                maxHeap.push(projects[i].second);
                i++;
            }
            if (maxHeap.empty()) {
                break;
            }
            w += maxHeap.top();
            maxHeap.pop();
        }

        return w;
    }
};