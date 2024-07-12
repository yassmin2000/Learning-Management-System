#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H
#include<string>
#include<map>
#include<fstream>
#include<vector>
#include<Qfile>
struct st{
    std ::string id,email,mobil,age;




};

class student_class
{
    st e;
public:
    student_class();
    std::map<std::string,st>read_data_st();


};

#endif // STUDENT_CLASS_H
