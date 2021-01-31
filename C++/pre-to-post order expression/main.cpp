#include "stack.cpp"

bool isOperator(string c)
{
    if (c=="+" || c=="-" || c=="/" || c=="*")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	Stack s1;
    string st;
	string preorderexp;
	int length;
	cout<<"Pre-order expression:"<<endl;
	cin>>preorderexp;
	length=preorderexp.size();
	for (int i=length-1;i>=0;i--)
    {
        string character=string(1,preorderexp[i]);
        if (isOperator(character))
        {
            string op1=s1.pop();
            string op2=s1.pop();
            string toPush=op1+op2+character;
            s1.push(toPush);
        }
        else
        {
            s1.push(string(1,preorderexp[i]));
        }

    }
    cout<<"Post-order expression is:"<<endl<<s1.pop();
}
