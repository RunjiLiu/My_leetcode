/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start

class Solution {
struct stack
{
    char chs[10001];
    int top;
};

public:
    bool isValid(string s) {
        stack *st  = (stack*)malloc(sizeof(stack));
        st->chs[0] = '@';
        st->top = 0;
        for (auto ch=s.begin();ch!=s.end();ch++){
            switch (*ch)
            {
            case ')':
                if (st->chs[st->top] == '(')
                    st->top--;          
                else
                    return false;
                break;
            case '}':
                if (st->chs[st->top] == '{')
                    st->top--;          
                else
                    return false;
                break;
            case ']':
                if (st->chs[st->top] == '[')
                    st->top--;          
                else
                    return false;
                break;
            default:
                st->chs[++st->top] = *ch;
                break;
            }
        } 
        if (st->top!=0){
            return false;
        }  
        return true;
    }
};
// @lc code=end

