// C++ code to demonstrate sorting of a
// 2D vector on basis of a column
#include<iostream>
#include<vector> // for 2D vector
#include<stack>
#include<queue>
#include<algorithm> // for sort()
using namespace std;

void showstack(stack <char> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << '\n';
}



string rev(string st, int len){
stack<char> ss;
queue<char> sr;
string ch= "";
char d ;
for (int i =0; i< len;  i++){
if (st[i]=='('){
        ss.push(i);
    } else if (st[i]==')'){
    sr.push(i);}

}
while(!ss.empty()&& !sr.empty()){
reverse(st.begin()+ss.top(), st.begin()+sr.front());
ss.pop();
sr.pop();
}
string res = "";
    for (int i = 0; i < len; i++) {
        if (st[i] != ')' && st[i] != '(')
            res += (st[i]);
    }
    return res;

}

  /* else if ( d==')'){
        ss.pop();
int j=i;
while(st[j]!='('){
        ch=ss.top();
ss.pop();
        ch+=st[j];
j--;}
int dd= ch.length();
 reverse(ch.begin(), ch.end());
for (int jj=0; jj<  dd ; jj++){char ddd = ch[jj]; ss.push(ddd); }
}*/

//ss.top()+1;

//cout<< "\n";
//showqueue(sr);





int main(){

string so= "(orb(fu(nikc))ym)";
int ll= so.length();
 string oo=rev(so, ll);
cout<< oo;

	return 0;}
