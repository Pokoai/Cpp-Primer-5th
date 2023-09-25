#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ifstream input(arg[1]);
    ofstream output(arg[2]);

    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while ( read(input, trans) ) {
            if (total.isbn() == trans.isbn() )
                total.combine(trans);
            else {
                print(output, total) << endl;
                total = trans;
            }
        }
    }
    //////////////
    ofstram out;
    out.open(ifile + ".copy");
    if (out);
    out.close();
    out.open(ifile2 + ".copy");

    return 0;
}
