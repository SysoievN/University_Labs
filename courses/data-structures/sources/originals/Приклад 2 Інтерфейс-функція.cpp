#include <iostream>
#include "My_Deque.h"
#include <string>

using namespace std;

void print_menu()
{
	cout << "Menu:" << endl;
	cout << "0.Print menu" << endl;
	cout << "1.Add to head" << endl;
	cout << "2.Add to tail" << endl;
	cout << "3.Remove from head" << endl;
	cout << "4.Remove from tail" << endl;
	cout << "5.Get head" << endl;
	cout << "6.Get tail" << endl;
	cout << "7.Get size" << endl;
	cout << "8.Swap head and tail" << endl;
	cout << "9.Reverse deque" << endl;
	cout << "10.Check if contains value" << endl;
	cout << "11.Clear deque" << endl;
	cout << "12.Print deque" << endl;
}

int main()
{
	Deque* deque = new Deque();
	int number;
	print_menu();
	while (true)
	{
		cout << "Enter the number of the action you want to select:" << endl;
		string number_str;
		cin >> number_str;
		try {
			number = stoi(number_str);
		}
		catch (const invalid_argument& e)
		{
			cout << "Incorrect number" << endl;
		}
		if (number >= 0 && number <= 12)
		{
			switch (number)
			{
			case 0:
			{
				print_menu();
				break;
			}
			case 1:
			{
				cout << "Enter new data: " << endl;
				int new_data;
				cin >> new_data;
				deque->add_to_head(new_data);
				break;
			}
			case 2:
			{
				cout << "Enter new data: " << endl;
				int new_data;
				cin >> new_data;
				deque->add_to_tail(new_data);
				break;
			}
			case 3:
			{
				deque->remove_from_head();
				break;
			}
			case 4: 
			{
				deque->remove_from_tail();
				break;
			}
			case 5:
			{
				Node* h = deque->get_head();
				cout << "Head: " << h->get_value() << endl;
				break;
			}
			case 6:
			{
				Node* t = deque->get_tail();
				cout << "Tail: " << t->get_value() << endl;
				break;
			}
			case 7:
			{
				int size = 0;
				size = deque->get_size();
				cout << "Size: " << size << endl;
				break;
			}
			case 8:
			{
				deque->swap_head_tail();
				break;
			}
			case 9:
			{
				deque->swap();
				break;
			}
			case 10:
			{
				cout << "Enter an element: " << endl;
				int elem;
				cin >> elem;
				bool contains;
				contains = deque->contains(elem);
				if (contains == true)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
				break;
			}
			case 11:
			{
				deque->clear();
				break;
			}
			case 12:
			{
				deque->print();
				break;
			}
			}
		}
	}
}