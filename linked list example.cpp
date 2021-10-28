#include <iostream>
using namespace std;
struct chaitu
{
    int grace;
    chaitu *love;
};
void display(chaitu *head)
{
    while(head!=NULL)
    {
        cout<<head->grace<<" ";
        head=head->love;
    }
}
int main() {
    chaitu *head;
    chaitu *body;
    chaitu *base;
    head=new chaitu();
    body=new chaitu();
    base=new chaitu();
    head->grace=1;
    head->love=body;
    body->grace=4;
    body->love=base;
    base->grace=3;
    base->love=NULL;
    display(head);

}