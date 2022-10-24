#ifndef TOKEN_H
#define TOKEN_H
using namespace std;
/*
class Parser
{
    public:
}*/

void tokenizer(string line)
{
    vector <string> tokens;

    string temp;
    
    stringstream check1(line);
    
    //delimit ' '
    while(getline(check1, temp, ' '))
    {
        tokens.push_back(temp);
    }
    
    for(int i = 0; i<tokens.size(); i++)
    {
        cout << tokens[i] << '\n';
    }
}


#endif
