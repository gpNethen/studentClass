//Author: Nathan Reichert
//Last Updated: Thursday March 21, 2019
//This is the header file for a Student class object

#ifndef STUDENT_H
#define STUDENT_H

#include <cstdlib>
#include <iostream>
#include <cstring>

class Student
{
     public:
          Student();                     //Default constructor
          ~Student();                    //Destructor
          int getSid();                  //Retrieves Student ID
          string getFname();             //Retrieves Student first name
          string getLname();             //Retrieves Student last name
          int getScore1();               //Score retrieval functions
          int getScore2();
          int getScore3();
          int getScore4();
          void inputStudentInfo();       //Function to get user input to store in Student object
          void displayStudentInfo();     //Function to display all of the stats of a Student object
          float computeAvgScore();       //Function that returns the average of the Student object's four exam scores
          
     private:
          int sid;                       //Variable for the Student ID
          string fname;                  //Variable for Student first name
          string lname;                  //Variable for Student last name
          int x1, x2, x3, x4;            //Variables for the four exam scores associated with a Student
};
#endif
