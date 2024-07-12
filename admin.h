#ifndef ADMIN_H
#define ADMIN_H
#include<string >
#include<fstream>
#include <Qfile>
#include <vector>
#include<QDebug>
//#include "Admin.csv"


class Admin
{
   std ::string E ,p;
public:
    Admin(std::string a,std:: string b);
  bool read_name();
  void write_data(std :: string h);
};

#endif // ADMIN_H
