#include <iostream>
#include "Sales_item.h"

// 1.24 编写程序，读取多条销售记录，并统计每个 ISBN（每本书）有几条销售记录。


int main()
{
    Sales_item total;
    if (std::cin >> total){
        Sales_item trans;
        while (std::cin >> trans){
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}