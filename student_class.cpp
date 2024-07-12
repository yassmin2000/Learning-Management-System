#include "student_class.h"



student_class::student_class()
{

}

std::map<std::string,st> student_class::read_data_st()
{
    std::map<std::string,st>m;
    std::vector<std::string> vt;

    std::fstream fin;
    fin.open("C:/Users/lama zakaria/Desktop/untitled1/student.csv",std::ios::in);

    std::string temp,word;
    while(!fin.eof())

    {
        vt.clear();
        std::getline(fin,temp);
        std::stringstream g (temp);
        while(std::getline(g,word,','))
        {
            vt.push_back(word);
        }

        e.id=vt[1];
        e.email=vt[2];
        e.mobil=vt[3];
        e.age=vt[4];
        m[vt[0]]=e;


    }
    return m;







}
