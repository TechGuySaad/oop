#include<iostream>

using namespace std;
class TEST
{
int TestCode;
string Description;
int NoCandidate;
int CenterReqd;

float CALCNTR()
{
    return NoCandidate/100+1;
}

public:
void SCHEDULE();
void DISPTEST();


};

void TEST:: SCHEDULE()
{
    cout<<"test code: "<<endl;
    cin>>TestCode;
    cout<<"description: "<<endl;
    cin>>Description;
    cout<<"no candidate :"<<endl;
    cin>>NoCandidate;
    cout<<"centers reqd:"<<endl;
    cin>>CenterReqd;

}

void TEST::DISPTEST()
{
    cout<<"test code: "<<TestCode
    <<"description: "<<Description
    <<"candidate number: "<<NoCandidate
    <<"Num of centers required :"
    <<CenterReqd<<endl;
}





int main()
{
    TEST s;

    s.SCHEDULE();
    s.DISPTEST();

}