// Problem Link: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/

class Solution {

public:

    int minCost(string colors, vector<int>& neededTime) {

        priority_queue<int,vector<int>,greater<int>>pq;

        int n=colors.size();

        int i=0,j=1;

        int ans=0;

        while(i<j&&j<n)

        {

            bool run=true;

            while(run&&j<n)

            {

                if(colors[i]==colors[j])

                {

                    if(j==i+1)

                    {

                        pq.push(neededTime[i]);

                    }

                    pq.push(neededTime[j]);

                    j++;

                }

                else

                {

                    run=false;

                    i=j;

                    j++;

                }

            }

            

            while(pq.size()>1)

            {

                ans+=pq.top();

                pq.pop();

            }

            if(!pq.empty())

            {

                pq.pop();

            }

            

        }

        return ans;

    }

};
