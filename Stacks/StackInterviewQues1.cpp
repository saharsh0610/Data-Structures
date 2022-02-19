// Two Stacks in an Array
class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    TwoStack(int s)
    {
        this->size = size;
        top1 = -1;
        top2 = s;
        arr = new int(s);
    }

    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

// Reverse a string using stacks

string str = "gupta";
stack<char> s;
for (int i = 0; i < str.length(); i++)
{
    char ch = str[i];
    s.push(ch);
}
string ans = "";
while (!s.empty())
{
    char ch = s.top();
    ans.push_back(ch);
    s.pop();
}
cout << ans << endl;

// Delete Middle Element from Stack

void solve(stack<int> &inputStack, int cnt, int size)
{
    if (cnt == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, cnt + 1, size);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}

// Valid Parenthesis

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
    }
    // if opening bracket, stackpush
    // if close bracket, stackTop check and pop

    if (ch = '{' || ch == '(' || ch == '[')
    {
        s.push(ch);
    }
    else
    {
        if (!s.empty())
        {
            char top = s.top();
            if ((ch = '}' && top == '{') || (ch == ')' && top == '(') || (ch == ']' && top == '['))
            {
                s.pop();
            }

            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}