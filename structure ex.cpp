//structure example program
#include <iostream>
using namespace std;
struct student
{
    private:
     int score1,score2;
    public:
    char name[20];
};
int main()
{
    student s1;
    s1.score1=80;
    s1.score2=70;
    cout<<s1.score1<<endl<<s1.score2;
    

    return 0;
}


