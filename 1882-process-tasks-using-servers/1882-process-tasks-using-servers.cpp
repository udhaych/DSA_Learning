#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> free;
        priority_queue<tuple<long long,int,int>,
                       vector<tuple<long long,int,int>>,
                       greater<>> busy;

        for (int i = 0; i < (int)servers.size(); i++)
            free.push({servers[i], i});

        vector<int> ans(tasks.size());
        long long time = 0;

        for (int j = 0; j < (int)tasks.size(); j++) {
            time = max(time, (long long)j);
            if (free.empty())
                time = max(time, get<0>(busy.top()));
            while (!busy.empty() && get<0>(busy.top()) <= time) {
                auto [t, w, i] = busy.top();
                busy.pop();
                free.push({w, i});
            }

            auto [w, i] = free.top();
            free.pop();
            ans[j] = i;
            busy.push({time + tasks[j], w, i});
        }
        return ans;
    }
};