#include <iostream>
using namespace std;
struct node
{
	int info;
	node* link;
};
node* sp;
//10.4 them phan tu
void Push(int x)
{
	node* p = new node;
	p->info = x;
	p->link = sp;
	sp = p;
}
//10.5 lay phan tu ra
int Pop(int& x)
{

}
main()
{
	return 0;
}