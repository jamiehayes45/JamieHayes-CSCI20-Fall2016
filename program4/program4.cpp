//created by Jmaie Hayes
//created on 11/13/16
// title: program 4
#include <iostream>
#include <string>
#include <fstream> 
#include <iomanip> 
using namespace std;

/* Description: The program will read student answers from a test and compare 
*them to an answer key 1 point is awarded for each correct answer, omitted answers  
*0 points, and incorrect answers deduct ¼ point.  The program should output to
*get the screen and a file the student’s name, overall grade on the exam and each 
*omitted or incorrect question.   It should then compute the class average grade 
*and if there were any questions that more than 50% of the class omitted or got 
*incorrect.
*/ 

   /* class print {
    public :
    ptint ();
    int studentGrade = 0; // the grade they earned 
    string letterGrade =0;
    string condition;  // random condition 
    
    private :
    string studentNum = 0; // student name 
    
};
 /* print::print () {
     string gradeEarned; // total grade
     string possiblePts; // the amount the student could have earned 
     
     // sets the number of students to read from 
     for (int i = 0; i < studentNum; ++i) {
         student[i] = string;
         grade[i] = 0;
     }
 }
 */
  int main() {
      ifstream  inFS; // input file stream
      string fileNum1;   // below are the student answers from student answers
      string fileNum2;
      string fileNum3;
      string fileNum4;
      string fileNum5;
      string fileNum6;
      string fileNum7;
      string fileNum8;
      string fileNum9;
      string fileNum10;
      string fileNum11;
      string fileNum12;
      string fileNum13;
      string fileNum14;
      string fileNum15;
      string fileNum16;
      string fileNum17;
      string fileNum18;
      string fileNum19;
      string fileNum20;
      string fileNum21;
      
      // open file - student answers
      cout << "opening file AnswerKey.txt" << endl;
      
      inFS.open("answerKey.txt");
          if (!inFS.is_open()) {
          cout << "Could not open file answerKey.txt." << endl;
      return 1; // 1 indicates error
      }
       // myfile.txt should contain 26 answers in the answer key to test, else problems
   cout << "Reading answer key to test." << endl;
   inFS >> fileNum1;
   inFS >> fileNum2;
   inFS >> fileNum3;
   inFS >> fileNum4;
   inFS >> fileNum5;
   inFS >> fileNum6;
   inFS >> fileNum7;
   inFS >> fileNum8;
   inFS >> fileNum9;
   inFS >> fileNum10;
   inFS >> fileNum11;
   inFS >> fileNum12;
   inFS >> fileNum13;
   inFS >> fileNum14;
   inFS >> fileNum15;
   inFS >> fileNum16;
   inFS >> fileNum17;
   inFS >> fileNum18;
   inFS >> fileNum19;
   inFS >> fileNum20;
   inFS >> fileNum21;
   
   cout << "Closing file answerKey.txt." << endl;
   inFS.close(); // Done with file, so close it
   
   // Ouput values read from file
   cout << "sanser 1: " << fileNum1 << endl;
   cout << "answer 2: " << fileNum2 << endl;
   cout << "answer 3: " << fileNum3 << endl;
   cout << "answer 4: " << fileNum4 << endl;
   cout << "answer 5: " << fileNum5 << endl;
   cout << "answer 6: " << fileNum6 << endl;
   cout << "answer 7: " << fileNum7 << endl;
   cout << "answer 8: " << fileNum8 << endl;
   cout << "answer 9: " << fileNum9 << endl;
   cout << "answer 10: " << fileNum10 << endl;
   cout << "answer 11: " << fileNum11 << endl;
   cout << "answer 12: " << fileNum12 << endl;
   cout << "answer 13: " << fileNum13 << endl;
   cout << "answer 14: " << fileNum14 << endl;
   cout << "answer 15: " << fileNum15 << endl;
   cout << "answer 16: " << fileNum16 << endl;
   cout << "answer 17: " << fileNum17 << endl;
   cout << "answer 18: " << fileNum18 << endl;
   cout << "answer 19: " << fileNum19 << endl;
   cout << "answer 20: " << fileNum20 << endl;
   cout << "answer 21: " << fileNum21 << endl;
   
   return 0;
  }
 