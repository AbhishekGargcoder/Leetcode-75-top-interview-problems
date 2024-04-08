class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int len = students.size(); // Sandwiches will be the same length
        queue<int> studentQueue;
        stack<int> sandwichStack;
        for (int i = 0; i < len; i++) {
            sandwichStack.push(sandwiches[len - i - 1]);
            studentQueue.push(students[i]);
        }
        int lastServed = 0;
        while (!studentQueue.empty() && lastServed < studentQueue.size()) {
            if (sandwichStack.top() == studentQueue.front()) {
                sandwichStack.pop(); // Serve sandwich
                studentQueue.pop(); // Student leaves queue
                lastServed = 0;
            } else {
                studentQueue.push(studentQueue.front());
                studentQueue.pop(); // Remove from front
                lastServed++;
            }
        }
        return studentQueue.size();
    }
};   
