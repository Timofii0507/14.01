#include <Windows.h>
#include "stack.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    cout << "Ââĺäłňü đîçěłđ ńňĺęó: ";
    cin >> size;
    Stack s(size);
    char choice;
    char c;
    do {
        cout << "\nĚĺíţ:\n";
        cout << "1. Âíĺńňč ńčěâîë â ńňĺę\n";
        cout << "2. Âčäŕëčňč ńčěâîë çł ńňĺęó\n";
        cout << "3. Ďłäđŕőóâŕňč ęłëüęłńňü ńčěâîëłâ â ńňĺöł\n";
        cout << "4. Ďĺđĺâłđčňč, ÷č ńňĺę ďîđîćíłé\n";
        cout << "5. Ďĺđĺâłđčňč, ÷č ńňĺę ďîâíčé\n";
        cout << "6. Î÷čńňčňč ńňĺę\n";
        cout << "7. Îňđčěŕňč áĺç âčäŕëĺíí˙ âĺđőíłé ńčěâîë â ńňĺöł\n";
        cout << "8. Âčéňč ç ďđîăđŕěč\n";
        cout << "Ââĺäłňü âŕř âčáłđ: ";
        cin >> choice;
        switch (choice) {
        case '1':
            cout << "Ââĺäłňü ńčěâîë, ˙ęčé őî÷ĺňĺ âíĺńňč â ńňĺę: ";
            cin >> c;
            s.push(c);
            break;
        case '2':
            c = s.pop();
            if (c != '\0') {
                cout << "Ńčěâîë, ˙ęčé áóâ âčäŕëĺíčé çł ńňĺęó: " << c << "\n";
            }
            break;
        case '3':
            cout << "Ęłëüęłńňü ńčěâîëłâ â ńňĺöł: " << s.count() << "\n";
            break;
        case '4':
            if (s.isEmpty()) {
                cout << "Ńňĺę ďîđîćíłé\n";
            }
            else {
                cout << "Ńňĺę íĺ ďîđîćíłé\n";
            }
            break;
        case '5':
            if (s.isFull()) {
                cout << "Ńňĺę ďîâíčé\n";
            }
            else {
                cout << "Ńňĺę íĺ ďîâíčé\n";
            }
            break;
        case '6':
            s.clear();
            cout << "Ńňĺę î÷čůĺíî\n";
            break;
        case '7':
            c = s.peek();
            if (c != '\0') {
                cout << "Âĺđőíłé ńčěâîë â ńňĺöł: " << c << "\n";
            }
            break;
        case '8':
            cout << "Âčőîäčěî ç ďđîăđŕěč\n";
            break;
        default:
            cout << "Íĺâłđíčé âčáłđ, ńďđîáóéňĺ ůĺ đŕç\n";
            break;
        }
    } while (choice != '8');
    return 0;
}
