#include <iostream>
#include <cstring>
using namespace std;

struct students{
        int rollno;
        char name[30];
    };
    
int main()
{
    struct students *s1;
    s1 = (struct students *)malloc(sizeof(struct students));
    s1->rollno=1;
    strncpy(s1->name, "arshya", sizeof(s1));
    //s1->name="arshya";
    //s1={2,"arshya"};
    cout<<s1->rollno<<endl;
    cout<<s1->name<<endl;
    return 0;
}

