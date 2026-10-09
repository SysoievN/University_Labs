int main()
{
    Deque<int> deque;

    while (true)
    {
        string choice;
        cout << "Type '0' if you want to print the deque" << endl;
        cout << "Type '1' if you want to add an item" << endl;
        cout << "Type '2' if you want to remove an item" << endl;
        cout << "Type '3' if you want to see the first item" << endl;
        cout << "Type '4' if you want to swap head and tail" << endl;
        cout << "Type '5' if you want to check the deque for emptiness" << endl;
        cout << "Type '6' if you want to see the size" << endl;
        cout << "Type '7' if you want to reverse the deque" << endl;
        cout << "Type '8' if you want to check an item for existence" << endl;
        cout << "Type '9' if you want to clear the deque" << endl;
        cout << "Type 'e' if you want to exit the program: ";
        getline(cin >> ws, choice);
        cout << endl;
        if (choice == "0")
        {
            if (!deque.print())
                cout << "The deque doesn't have enough items to perform the operation" << endl;
        }
        else if (choice == "1")
        {
            while (true)
            {
                string ch;
                cout << "Type '1' if you want to add an item to head" << endl;
                cout << "Type '2' if you want to add an item to tail" << endl;
                cout << "Type 'e' if you want to exit the operation: ";
                getline(cin >> ws, ch);
                cout << endl;
                if (ch == "1")
                {
                    int item;
                    cout << "Item: ";
                    cin >> item;
                    deque.pushToHead(item);
                    cout << "Item '" << item << "' was successfully added to the deque" << endl;
                    break;
                }
                else if (ch == "2")
                {
                    int item;
                    cout << "Item: ";
                    cin >> item;
                    deque.pushToTail(item);
                    cout << "Item '" << item << "' was successfully added to the deque" << endl;
                    break;
                }
                else if (ch == "e")
                    break;
                else
                    cout << "You entered an incorrect value. Please try again" << endl;
                cout << endl;
            }
        }
        else if (choice == "2")
        {
            while (true)
            {
                string ch;
                cout << "Type '1' if you want to remove an item from head" << endl;
                cout << "Type '2' if you want to remove an item from tail" << endl;
                cout << "Type 'e' if you want to exit the operation: ";
                getline(cin >> ws, ch);
                cout << endl;
                if (ch == "1")
                {
                    if (deque.popFromHead())
                        cout << "One item was successfully removed from the deque" << endl;
                    else
                        cout << "The deque doesn't have enough items to perform the operation" << endl;
                    break;
                }
                else if (ch == "2")
                {
                    if (deque.popFromTail())
                        cout << "One item was successfully removed from the deque" << endl;
                    else
                        cout << "The deque doesn't have enough items to perform the operation" << endl;
                    break;
                }
                else if (ch == "e")
                    break;
                else
                    cout << "You entered an incorrect value. Please try again" << endl;
                cout << endl;
            }
        }
        else if (choice == "3")
        {
            while (true)
            {
                string ch;
                cout << "Type '1' if you want to see the first item from head" << endl;
                cout << "Type '2' if you want to see the first item from tail" << endl;
                cout << "Type 'e' if you want to exit the operation: ";
                getline(cin >> ws, ch);
                cout << endl;
                if (ch == "1")
                {
                    try
                    {
                        int peek = deque.peekFromHead();
                        cout << "Head: " << peek << endl;
                    }
                    catch (const exception& e)
                    {
                        cout << e.what() << endl;
                    }
                    break;
                }
                else if (ch == "2")
                {
                    try
                    {
                        int peek = deque.peekFromTail();
                        cout << "Tail: " << peek << endl;
                    }
                    catch (const exception& e)
                    {
                        cout << e.what() << endl;
                    }
                    break;
                }
                else if (ch == "e")
                    break;
                else
                    cout << "You entered an incorrect value. Please try again" << endl;
                cout << endl;
            }
        }
        else if (choice == "4")
        {
            if (deque.headTailSwap())
                cout << "Head and tail were successfully swaped" << endl;
            else
                cout << "The deque doesn't have enough items to perform the operation" << endl;
        }
        else if (choice == "5")
        {
            if (deque.isEmpty())
                cout << "Deque is empty" << endl;
            else
                cout << "Deque is not empty" << endl;
        }
        else if (choice == "6")
        {
            cout << "Deque size: " << deque.getSize() << endl;
        }
        else if (choice == "7")
        {
            if (deque.reverse())
                cout << "The deque was successfully reversed" << endl;
            else
                cout << "The deque doesn't have enough items to perform the operation" << endl;
        }
        else if (choice == "8")
        {
            int item;
            cout << "Item: ";
            cin >> item;
            if (deque.contains(item))
                cout << "The deque contains the item '" << item << "'" << endl;
            else
                cout << "The deque does not contain the item '" << item << "'" << endl;
        }
        else if (choice == "9")
        {
            deque.clear();
            cout << "The deque was successfully cleared" << endl;
        }
        else if (choice == "e")
            break;
        else
            cout << "You entered an incorrect value. Please try again" << endl;
        cout << endl;
    }

    return 0;
}