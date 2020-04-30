#include "stdafx.h"
#include<iostream> 
using namespace std;
struct list
{
	int value;
	list* next;
	list()
	{
		value = 0;
		next = NULL;
	}
};
void AddToList(list*& src, list* second, int n)
{
	list* l = src;
	list* z = l;
	list* d = second;
	while (l != NULL)
	{
		z = l;
		l = l->next;
	}
	while (d != NULL)
	{
		z->next = d;
		z = d;
		d = d->next;
	}
}
void Copy(list* first, list* second, int n)
{
	int i = 0;
	list* f = first;
	list* s = second;
	while (i < n)
	{
		s->value = f->value * 2;
		if (i != n - 1)
		{
			s->next = new list();
			s = s->next;
			f = f->next;
		}
		i++;
	}

}
void InputList(list*& first, int n)
{
	float z;
	cout << "Введите элементы списка: " << endl;
	list* p = first;
	int i = 0;
	while (i < n)
	{
		cin >> z;
		p->value = z;
		if (i != n - 1)
		{
			p->next = new list();
			p = p->next;
		}
		i++;
	}
}
void OutputList(list* l)
{
	while (l != NULL)
	{
		cout << l->value;
		l = l->next;
		if (l != NULL)cout << ", ";
	}
	cout << endl;
}
int main()
{
	list* first = new list();
	list* second = new list();

	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество элементов списка: " << endl;
	cin >> n;

	InputList(first, n);
	Copy(first, second, n);
	AddToList(first, second, n);
	OutputList(first);
	system("pause");
	return 0;
}