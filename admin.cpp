#include "admin.h"

Admin::Admin(std::string a,std::string b)
{
    E=a;
    p=b;

}
bool Admin::read_name()
{
   std:: fstream fin;
   std:: vector<std::string>v;
   int count=0;
    fin.open("C:/Users/lama zakaria/Desktop/untitled1/Admin.csv",std::ios::in);


    std::string temp, work, t;

    while(!fin.eof())
    {
        v.clear();
        std::getline(fin,t);
        std::stringstream st (t);
        while(std::getline(st,work,','))
        {

            v.push_back(work);

        }

        if(v[0]==E && v[1]==p)
        {
           return true;

        }
 }
    if(count==0)
        return false;

}
void Admin:: write_data(std :: string h)
{


    std::fstream fout;
    fout.open("C:/Users/lama zakaria/Desktop/untitled1/Admin.csv", std::ios::out|std::ios::app);
  //  fout.open("student.csv");
    fout<<h
       <<"\n";

}
