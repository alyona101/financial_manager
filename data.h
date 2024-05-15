#pragma once

namespace data
{
    struct Data
    {
        Data() = default;
        Data(std::string datacopy)
        {
        std::string DD = datacopy.substr(0, 2);
        std::string MM = datacopy.substr(3, 2);
        std::string YY = datacopy.substr(6, 4);

        int day = atoi(DD.c_str());
        int month = atoi(MM.c_str());
        int year = atoi(YY.c_str());
        }
       

        int day;
        int month;
        int year;
    };
}